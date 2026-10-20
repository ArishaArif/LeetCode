class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>hash;
        for(auto s:strs){
            string temp=s;
            sort(temp.begin(),temp.end());          
            hash[temp].push_back(s);
        }
        vector<vector<string>>res;
        for(auto i:hash){
            res.push_back(i.second);
        }
        return res;
    }
};