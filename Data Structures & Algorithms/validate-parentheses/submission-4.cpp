class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<n;i++){
            char ch = s[i];
            if(ch == "(" || ch == "[" || ch == "{"){
                st.push(ch);
            }
            else{
                if(st.empty()){
                    return false;
                }
            }
            int top = st.top();
            if(top == "(" && ch == ")")||
              (top == "[" && ch == "]" )||
              (top == "{" && ch == "}"){
                st.pop();
              }

        }
        return st.size();

    }
};