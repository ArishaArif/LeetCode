class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        bool check[26]={false};
        for(char allow:allowed){
            check[allow-'a']=true;
        }
        int res=0;
        for(int i=0;i<words.size();i++){
            bool yes=true;
            for(int j=0;j<words[i].size();j++){
             if(check[words[i][j]-'a']==false){
                yes=false;
                break;
             }
            }
            if(yes){res++;}
        }
        return res;
    }
};