class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n<1 or n%2==0){ //if even number or less than 1
            return false;
        }
        // int m=pow(3,19);
        // if (m%n==0){
        //     return true;
        // }
        // return false;
        if (n==1){return true;}
        return n%3==0 && isPowerOfThree(n/3);
 
    }
};