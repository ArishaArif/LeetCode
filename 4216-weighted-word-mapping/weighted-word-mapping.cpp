class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string s;
        for(int i=0;i<words.size();i++){
            int sumweight=0;
            for(int j=0;j<words[i].size();j++){
             sumweight+=weights[words[i][j]-'a'];
            }
           s+='z'-(sumweight%26);
        }
        return s;
    }
};