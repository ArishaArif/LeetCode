class Solution {
public:
    int missingNumber(vector<int>& nums) {
         long long size = nums.size();
long long expectedsum = 0;
long long actualsum = 0;
for (int i = 0; i <= size; i++) {
    expectedsum += i;
}
for (auto& i : nums) {
    actualsum += i;
}
return expectedsum - actualsum;
    }
};