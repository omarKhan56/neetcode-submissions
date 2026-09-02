class Solution {
   public:
    int evalRPN(vector<string>& tokens) {
        stack<char> st;
        int n = tokens.size();
        for (string op : tokens) {
            if (op != "+" && op != "*" && op != "-") {
                st.push(stoi(op));
            } else if (op == "+") {
                int first = st.top();
                st.pop();

                int second = st.top();

                int sum = first + second;
            } else if (op == "*") {
                st.push(sum * st.top())
            } else if (op == "-") {
                st.push(sum - st.top());
            }
            else if(op == "/"){
                st.push(sum / st.top());
            }
        }
        int total = 0;
        while(!st.empty()){
            total+=st.top();
            st.pop();
        }
        return result;
    }
};
