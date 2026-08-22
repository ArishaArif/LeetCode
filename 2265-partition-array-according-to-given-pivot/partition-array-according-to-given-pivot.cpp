class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>less;
        vector<int>p;
        vector<int>more;
        for(const auto i:nums){
            if (i<pivot){less.push_back(i);}
            else if(i==pivot){p.push_back(i);}
            else{more.push_back(i);}
        }
        vector<int> res;
        res.reserve(nums.size());
        res.insert(res.end(), less.begin(), less.end());
        res.insert(res.end(), p.begin(), p.end());
        res.insert(res.end(), more.begin(), more.end());
        return res;
    }
};