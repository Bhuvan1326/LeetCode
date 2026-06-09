/* Temple of Brackets
Ancient priests communicate using bracket sequences made of (), [], and {}. A sequence is
considered sacred if every opening bracket has a matching closing bracket in the correct order.
Determine whether the given sequence is sacred. Print YES if valid, otherwise print NO.*/

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string s;
    cin>>s;
    stack<char> st;
    for(char c : s)
    {
        if(c == '(' || c == '[' || c == '{')
        {
            st.push(c);
        }
        else
        {
            if(st.empty())
            {
                cout << "NO" << endl;
                return 0;
            }
            char top = st.top();
            st.pop();
            if((c == ')' && top != '(') || (c == ']' && top != '[') || (c == '}' && top != '{'))
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    if(st.empty())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}