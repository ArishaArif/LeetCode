class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int m=INT_MIN,sm=INT_MIN,tm=INT_MIN;
        int min1=INT_MAX,min2=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>m){
                tm=sm;
                sm=m;
                m=nums[i];
            }else if(nums[i]>sm){
                tm=sm;
                sm=nums[i];
            }else if(nums[i]>tm){
                tm=nums[i];
            }
            if(nums[i]<min1){
                min2=min1;
                min1=nums[i];
            }else if(nums[i]<min2){
                min2=nums[i];
            }
        }
        return max(m*sm*tm,m*min1*min2);
    }
};