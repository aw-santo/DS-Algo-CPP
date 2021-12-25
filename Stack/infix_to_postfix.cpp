#include<bits/stdc++.h>

using namespace std;

int isOperator(char c){
    return (c=='+' || c=='-' || c=='*' || c=='/');
}

int prec(char c){
    if (c=='*' || c=='/')
    {
        return 2;
    }
    else{
        return 1;
    }
}

void infix_to_postfix(string s){
    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if ((s[i]>='0' && s[i]<='9') || (s[i]>='a' && s[i]<='z'))
        {
            cout<<s[i];
        }
        else if(isOperator(s[i]))
        {
            if (prec(s[i]) >= prec(st.top()))
            {
                st.push(s[i]);
            }
            else{
                while (!st.empty() && (prec(s[i]) < prec(st.top())))
                {
                    cout<<st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
        }
        else
        {
            while (st.top()!= '(' && !st.empty())
            {
                cout<<st.top();
                st.pop();
            }
            
        }
        
    }
    while (!st.empty())
    {
        if (st.top() == '(')
        {
            st.pop();
            continue;
        }
        
        cout<<st.top();
        st.pop();
    }
    
    
}

void infix_to_prefix(string s1){
    stack<char> st;
    string s = "";
    for (int i = 0; i < s1.length(); i++)
    {
        st.push(s1[i]);
    }
    int i=0;
    while (!st.empty())
    {
        if (st.top()=='(')
        {
            s[i]=')';
        }
        else if (st.top()==')')
        {
            s[i]='(';
        }
        else 
        {
           s[i] = st.top();
        }
        
        
        
        st.pop();
        i++;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if ((s[i]>='0' && s[i]<='9') || (s[i]>='a' && s[i]<='z'))
        {
            cout<<s[i];
        }
        else if(isOperator(s[i]))
        {
            if (prec(s[i]) >= prec(st.top()))
            {
                st.push(s[i]);
            }
            else{
                while (!st.empty() && (prec(s[i]) < prec(st.top())))
                {
                    cout<<st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
        }
        else
        {
            while (st.top()!= '(' && !st.empty())
            {
                cout<<st.top();
                st.pop();
            }
            
        }
        
    }
    while (!st.empty())
    {
        if (st.top() == '(')
        {
            st.pop();
            continue;
        }
        
        cout<<st.top();
        st.pop();
    }
    
    
}
    


int main(){
    // infix_to_postfix("(a-b/c)*(a/k-l");
    infix_to_prefix("(a-b/c)*(a/k-l");
    return 0;
}