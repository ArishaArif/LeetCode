class Solution {
public:
    int missingNumber(vector<int>& nums) {
         int l = 0;
 unordered_map<int, int>hash;
 auto h = max_element(nums.begin(), nums.end());
 //we can just use array size since the seq always starts from 0
 for (auto& i : nums) {
     hash[i]++;
 }
 while (l < *h) {
     if (hash.find(l) == hash.end()) {
         return l;
     }
     l++;
 }
 return *h + 1;
    }
};