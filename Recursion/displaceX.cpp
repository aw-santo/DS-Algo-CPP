#include<bits/stdc++.h>

using namespace std;

string displaceX(string s){
    if (s.length()==0)
    {
        return "";
    }
    char ch = s[0];
    string ans = displaceX(s.substr(1));

    if (ch=='x')
    {
        return ans + 'x';
    }
    return ch+ans;
}

int main(){
    cout<<displaceX("xxxgfhdhuxbbxkbxkkbhvjx");
    return 0;
}