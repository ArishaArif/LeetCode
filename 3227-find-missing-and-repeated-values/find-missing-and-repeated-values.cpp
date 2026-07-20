class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        float size = grid.size() * grid.size();
long long expectedsum = size * ((1 + size) / 2);
cout << expectedsum << endl;
long long actual = 0;
vector<int>ans;
vector<int>freq(size+1,0);
for (int i = 0; i < grid.size(); i++) {
    for (int j = 0; j < grid[i].size(); j++) {
        freq[grid[i][j]]++;
        if (freq[grid[i][j]] < 2) {
            actual += grid[i][j];
        }
        else {
            ans.push_back(grid[i][j]);
        }
    }
}
cout << actual << endl;
ans.push_back(expectedsum - actual);
return ans;
    }
};