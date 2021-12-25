#include<bits/stdc++.h>

using namespace std;

bool isPowerOf2(int n){
    return !(n && (n & (n-1)));
}

int numOfOnes(int n){
    int count=0;
    while (n!=0)
    {
        n = n & (n-1);
        count++;
    }
    return count;
}

int main(){
    
    // cout<<isPowerOf2(1024);
    cout<<numOfOnes(5);
    return 0;
}