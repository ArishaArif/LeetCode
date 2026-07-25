class Solution {
public:
    int maxProduct(int n) {
        int num1=0,num2=0;
        while(n>0){
          int temp=n%10;
          n=n/10;
          if(temp>num1){
            num2=num1;
            num1=temp;
            
          }else if(temp>num2){
             num2=temp;
          }

        }
        return num1*num2;
    }
};