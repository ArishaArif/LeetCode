class Solution {
public:
    int maxDistinct(string s) {
        vector<bool>seen(26,false);
        for(int i=0;i<s.size();i++){
            seen[s[i]-'a']=true;
        }
        return count(seen.begin(),seen.end(), true);
    }
};