class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int, int>hash;
for (int i = 0; i < grid.size(); i++) {
    for (int j = 0; j < grid[i].size(); j++) {
        hash[grid[i][j]]++;
    }
}
vector<int>ans;
long long actualsum = 0;
long long expectedsum = 0;
for (int i = 1; i <= grid.size() * grid.size(); i++) {
    expectedsum += i;
}
for (auto& i : hash) {
    if (i.second > 1) {
        ans.push_back(i.first);
    }
    actualsum += i.first;
}
ans.push_back(expectedsum - actualsum);
return ans;
    }
};