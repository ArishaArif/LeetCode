class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>hash;
        for(auto&i:nums){
            hash[i]++;
        }
        priority_queue<pair<int,int>,vector<pair<int, int>>,greater<pair<int,int>>>minheap;
        for(auto i:hash){
            minheap.push({i.second,i.first});
            if(minheap.size()>k){
                minheap.pop();
            }
        }
        vector<int> result;
        while (!minheap.empty()) {
            result.push_back(minheap.top().second); 
            minheap.pop();
        }

        return result;
    }
};