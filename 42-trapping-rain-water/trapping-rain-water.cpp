class Solution {
public:
    int trap(vector<int>& height) {
        vector<int>check(height.size());
        check[0]=height[0];
        for(int i=1;i<height.size();i++){
            check[i]=max(check[i-1],height[i]);
        }
        int maxright=height[height.size()-1];
        check[height.size()-1]=min(maxright,check[height.size()-1])-height[height.size()-1];
        for(int i=height.size()-2;i>=0;i--){
            maxright=max(maxright,height[i]);
            check[i]=min(check[i],maxright)-height[i];
        }
        return accumulate(check.begin(),check.end(),0);


    }
};