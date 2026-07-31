class Solution {
public:
    int minimumPushes(string word) {
        vector<int>freq(26);
        for(auto i:word){
            freq[i-'a']++;
        }
        sort(freq.begin(),freq.end(),greater<int>());
       int sum=0;
        for(int i=0;i<freq.size();i++){
            sum+=freq[i]*(i/8+1);
        }
        return sum;
    }
};