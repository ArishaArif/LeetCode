class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x=0;
        bool last=false;
        long long sum=0;
        long m=10;
        while(n>0){
            int temp=n%10;
            if(temp!=0){
            if(last){
             x=temp*m+x;
             m*=10;
            }else{
                x=temp;
                last=true;
            }
            sum+=temp;
            }
            n=n/10;
        }
        return x*sum;
    }
};