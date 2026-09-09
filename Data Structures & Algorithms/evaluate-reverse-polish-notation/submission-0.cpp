class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> st;
        for(int i = 0 ; i<tokens.size(); i++){
            if(tokens[i] != "+" && tokens[i] != "*" && tokens[i] != "-" && tokens[i] != "/"){
                st.push(stoll(tokens[i]));
            }
            else{
                long long b = st.top();
                st.pop();
                long long a = st.top();
                st.pop();
                long long result;
                if(tokens[i]== "+"){
                     result = a + b;
                }
                else if (tokens[i]== "-"){
                     result = a-b;
                }
                else if (tokens[i]== "*"){
                     result = a*b;
                }
                else{
                     result = a/b;
                }
                st.push(result);
            }

        }
        return st.top();   
    }
};
