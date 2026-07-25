class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        unordered_set<int>s(nums.begin(),nums.end());
        for(int i=1;i<=n;i++){
            if(s.count(i)){
                continue;
            }else{
                ans.push_back(i);
            }
        }
        return ans;
    }
};