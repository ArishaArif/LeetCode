class Solution {
public:
    int minInsertions(string s) {
        stack<char>st;
        int size=s.size();
        int count=0;
        for (int i=0;i<size;i++){
            if (s[i]=='('){
                st.push(s[i]);
            }else{
                if(i<size-1 && s[i+1]==')'){
                    if(!st.empty()){
                    st.pop();
                    i++;}
                    else{
                    i++;
                    count++;
                    }
                }
                else{
                 if(!st.empty()){
                 st.pop();count++;}else{
                    count+=2;
                 }
                }
            }
        }
        if(!st.empty()){
            count+=st.size()*2;
        }
        return count;
    }
};