class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char v : s) {
            if (v == '(' || v == '{' || v == '[') {
                st.push(v);
            }
            else {
                if (st.empty()) return false;

                char top = st.top();
                st.pop();

                if ((v == ')' && top != '(') ||
                    (v == '}' && top != '{') ||
                    (v == ']' && top != '[')) {
                    return false;
                }
            }
        }

        return st.size()==0;
    }
};