class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (string op : tokens) {

            if (op != "+" && op != "-" && op != "*" && op != "/") {
                st.push(stoi(op));
            }

            else if (op == "+") {
                int first = st.top();
                st.pop();

                int second = st.top();
                st.pop();

                st.push(second + first);
            }

            else if (op == "-") {
                int first = st.top();
                st.pop();

                int second = st.top();
                st.pop();

                st.push(second - first);
            }

            else if (op == "*") {
                int first = st.top();
                st.pop();

                int second = st.top();
                st.pop();

                st.push(second * first);
            }

            else if (op == "/") {
                int first = st.top();
                st.pop();

                int second = st.top();
                st.pop();

                st.push(second / first);
            }
        }

        return st.top();
    }
};