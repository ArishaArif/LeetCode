class Solution {
public:
    string minWindow(string s, string t) {
        if (s.empty() || t.empty() || s.length() < t.length()) {
            return "";
        }
        unordered_map<char, int> targetCount;
        for (char c : t) {
            targetCount[c]++;
        }

        unordered_map<char, int> windowCount;
        int have = 0;                 
        int need = targetCount.size(); 

        int minLen = INT_MAX;
        int startIdx = 0;
        int left = 0;

        for (int right = 0; right < s.length(); right++) {
            char c = s[right];
            windowCount[c]++;

            if (targetCount.count(c) && windowCount[c] == targetCount[c]) {
                have++;
            }

            while (have == need) {
                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    startIdx = left;
                }

                char leftChar = s[left];
                windowCount[leftChar]--;

                if (targetCount.count(leftChar) && windowCount[leftChar] < targetCount[leftChar]) {
                    have--;
                }

                left++;
            }
        }

        return minLen == INT_MAX ? "" : s.substr(startIdx, minLen);
    }
};