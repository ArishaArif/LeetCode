class Solution {
public:
    vector<int> getRow(int rowIndex) {
       vector<int>prev;
       for (int i = 1; i <= rowIndex+1; i++) {
       vector<int> temp(i, 1);
            
            if (i > 2) {
                int p1 = 0, p2 = 1;
                for (int j = 1; j < i - 1; j++) {
                    temp[j] = prev[p1] + prev[p2];
                    p1++;
                    p2++;
                }
            }
            prev=temp;
        }
        return prev; 
    }
};