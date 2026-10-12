class Solution {
public:
    int scoreOfString(string s) {
        int res=0;
        for(int i=0;i<s.size();i++){
            if(i<s.size()-1)
            res+=abs(s[i]-s[i+1]);
            else
            continue;
        }
        return res;
    }
};