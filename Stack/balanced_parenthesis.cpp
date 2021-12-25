#include<bits/stdc++.h>

using namespace std;

void isBalanced(string s){
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]=='{' ||s[i]=='(' || s[i]=='[')
        {
            st.push(s[i]);
        }
        else if (s[i]=='}' || s[i]==')' || s[i]==']')
        {
            if (st.empty())
            {
                cout<<"Not Balanced!"<<endl;
                return;
            }
            
            switch (s[i])
            {
            case '}':
                if (st.top()=='{')
                {
                    st.pop();
                }
                else{
                    cout<<"No Balanced!"<<endl;
                    return;
                }
                break;
            case ')':
                if (st.top()=='(')
                {
                    st.pop();
                }
                else{
                    cout<<"No Balanced!"<<endl;
                    return;
                }
                break;
            case ']':
                if (st.top()=='[')
                {
                    st.pop();
                }
                else{
                    cout<<"No Balanced!"<<endl;
                    return;
                }
                break;
            
            }
            
        }
        
    }
    if (st.empty())
    {
        cout<<"Balanced!"<<endl;
    }
    
    
}

int main(){
    
    string s = "([])}";
    isBalanced(s);
    return 0;
}