#include<bits/stdc++.h>

using namespace std;

int divisible(int n, int a, int b){
    int countA = n/a;
    int countB = n/b;
    int countCommon = n/(a * b);
    return (countA + countB - countCommon);
}

int main(){
    
    cout<<divisible(40, 5, 7);
    return 0;
}