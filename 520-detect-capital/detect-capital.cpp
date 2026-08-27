class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.size()<=1){return true;}
        int countUC=0;
        for(auto&i:word){
            if(isupper(i))
                countUC++;
        }
        if (countUC==word.size() || countUC==0 || (countUC==1 && isupper(word[0]))){
            return true;
        }
        return false;
    }
};