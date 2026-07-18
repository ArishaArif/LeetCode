class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size()==0) {
    return 0;
}
map<int, int> hash;
for (auto i : nums) {
    hash[i]++;
}
int count = 1;
int m= 1;
for (auto p : hash) {
    if (hash.find(p.first + 1)==hash.end()) {
        count = 1;
    }
    else {
        count++;
    }
    m = max(m, count);
}
return m;
    }
};