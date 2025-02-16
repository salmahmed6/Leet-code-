class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (const string& token : tokens) {
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                // pop the last two numbers
                int num2 = st.top(); st.pop();
                int num1 = st.top(); st.pop();
                
                int result = 0;
                if (token == "+") {
                    result = num1 + num2;
                } else if (token == "-") {
                    result = num1 - num2;
                } else if (token == "*") {
                    result = num1 * num2;
                } else if (token == "/") {
                    result = num1 / num2;  // int division truncates toward zero
                }
                
                // push the result back to the stack
                st.push(result);
            } else {
                // convert the string token to an int and push it
                st.push(stoi(token));
            }
        }

        return st.top(); 
    }
};


// Approach to solve 
// 1- push nums onto the stack
// 2- when encountring an operator pop the top 2 numbers,
//       perform the operation and push the result back to the stack
// 3- the second poped is the left operand
// 4- first poped is the right operand
// 5- perform the operation anad push the result
