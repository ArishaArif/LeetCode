class Solution {
public:
    string sortVowels(string s) {
        vector<char>vowels;
        vowels.reserve(s.size());
        for(char n:s){
            if(n=='a'||n=='A'||n=='e'||n=='E'||n=='i'||n=='I'||n=='o'||n=='O'||n=='u'||n=='U'){
                vowels.push_back(n);
            }
        }
        sort(vowels.begin(), vowels.end());
        for(int n=0, k=0; n<s.size(); n++){
            if(s[n]=='a'||s[n]=='A'||s[n]=='e'||s[n]=='E'||s[n]=='i'||s[n]=='I'||s[n]=='o'||s[n]=='O'||s[n]=='u'||s[n]=='U'){
                s[n] = vowels[k++];
            }
        }
        return s;

    }
};