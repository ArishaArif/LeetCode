class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>code={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string>hash;
        for (const string& word : words) {
            string temp = "";
            for (char c : word) {
                temp += code[c - 'a'];
            }
            hash.insert(temp);
        }
        return hash.size();
    }
};