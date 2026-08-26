class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
     unordered_set<int>hash(nums.begin(),nums.end());
     int temp=k;
     while(hash.count(temp)){
        temp+=k;
     }
     return temp;
    }
};