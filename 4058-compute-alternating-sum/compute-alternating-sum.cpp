class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int count=nums[0];
        for(int i=1;i<nums.size();i++){
            if(i%2==0){
                count+=nums[i];
            }else{
                count-=nums[i];
            }
        }return count;
    }
};