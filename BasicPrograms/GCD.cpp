#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
    while (b!=0)
    {
        int n = a % b;
        a = b;
        b = n;
    }
    return a;
}

int main(){
    cout<<gcd(42, 24);
    return 0;
}