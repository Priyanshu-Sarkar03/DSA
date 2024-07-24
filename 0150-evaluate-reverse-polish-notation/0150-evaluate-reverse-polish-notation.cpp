class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> num;

        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" ||tokens[i] == "/") {
                int num2 = num.top();
                num.pop();
                int num1 = num.top();
                num.pop();
                int result;
                if (tokens[i] == "+") {
                    result = num1 + num2;
                } else if (tokens[i] == "-") {
                    result = num1 - num2;
                } else if (tokens[i] == "*") {
                    result = num1 * num2;
                } else if (tokens[i] == "/") {
                    result = num1 / num2;
                }
                num.push(result);
            } else {
                num.push(stoi(tokens[i]));
            }
        }

        return num.top();
    }
};
