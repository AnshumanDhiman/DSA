#include <stack>

bool isBalanced(string expression)
{
    stack<char> s;
    for (int i = 0; i < expression.length(); i++)
    {
        if (expression[i] == '(')
        {
            s.push(expression[i]);
        }
        else if (expression[i] == ')')
        {
            if (s.empty())
            {
                return false;
            }
            char topChar = s.top();
            s.pop();
            if (expression[i] == ')' && topChar == '(')
            {
                continue;
            }
            else
            {
                return false;
            }
        }
    }
    return s.empty();
}
