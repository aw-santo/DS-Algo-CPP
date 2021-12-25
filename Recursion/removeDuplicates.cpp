#include<bits/stdc++.h>

using namespace std;

string removeDuplis(string s){
    if (s.length()==0)
    {
        return "";
    }
    char ch = s[0];
    string ans = removeDuplis(s.substr(1));
    if (ch==ans[0])
    {
        return ans;
    }
    return ch+ans;
}

int main(){
    cout<<removeDuplis("aaaabbbeecdddd");
    return 0;
}