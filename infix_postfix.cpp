
#include<iostream>
#include<stack>
using namespace std;

int main()
{
    string s;
    stack<char> st;

    cout<<"Enter infix expression: ";
    cin>>s;

    for(int i=0; i<s.length(); i++)
    {
        char c = s[i];

        if(isalnum(c))
            cout<<c;

        else if(c=='(')
            st.push(c);

        else if(c==')')
        {
            while(st.top()!='(')
            {
                cout<<st.top();
                st.pop();
            }
            st.pop();
        }

        else
        {
            while(!st.empty() && st.top()!='(')
            {
                cout<<st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }

    return 0;
}
