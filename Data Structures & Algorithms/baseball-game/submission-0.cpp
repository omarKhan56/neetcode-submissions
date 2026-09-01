class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(char ch : ops)
        for(int i=0;i<ops.length();i++){
            char ch = ops[i];

            if(isdigit(ch)){
                st.push(ch);
            }
            else if(ch == '+'){
                
            }
        }

        

        
    }
};