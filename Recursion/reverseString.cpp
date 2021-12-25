#include<bits/stdc++.h>
#include<string>

using namespace std;

void reverseString(string s){
    if (s.length()==0)
    {
        return;
    }
    
    reverseString(s.substr(1));
    cout<<s[0];
}

int main(){
    reverseString("binod");
    return 0;
}