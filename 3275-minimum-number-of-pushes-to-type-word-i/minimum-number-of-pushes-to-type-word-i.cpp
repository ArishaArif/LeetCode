class Solution {
public:
    int minimumPushes(string word) {
        vector<int>freq(26);
        for(auto i:word){
            freq[i-'a']++;
        }
        sort(freq.begin(),freq.end(),greater<int>());
        int mul=1;
        int count=0;
        int sum=0;
        for(int i=0;i<freq.size();i++){
            if(count==8){
                count=0;
                mul++;
            }
            sum+=freq[i]*mul;
            count++;
        }
        return sum;
    }
};