#include<bits/stdc++.h>

using namespace std;

int main(){
    string str = "79413894";

    // sort(str.begin(), str.end());
    // cout<<str<<endl;
    // reverse(str.begin(), str.end());
    sort(str.begin(), str.end(), greater<int>());
    cout<<str;
    return 0;
}