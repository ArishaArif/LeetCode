class Solution {
public:
    char findTheDifference(string s, string t) {
     int array[26]={0};
     for(auto i:s){
      array[i-'a']++;
     }
      char res;
     for(auto i:t){
      array[i-'a']--;
      if(array[i-'a']<0){
            return i;
        }
     }
    
     return ' ';
    }
};