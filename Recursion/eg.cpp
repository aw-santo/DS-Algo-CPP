#include<bits/stdc++.h>
using namespace std;

int sum(int a){
    // int s=0;
    if (a==0)
    {
        return 0;
    }
    return a+sum(a-1);
}

int powerOf(int n, int p){
    if (p==0)
    {
        return 1;
    }
    return n * powerOf(n, p-1);
}

int fact(int n){
    if (n==0 || n==1)
    {
        return 1;
    }
    return n * fact(n-1);
}

int fib(int n){
    if (n==0 || n==1)
    {
        return n;
    }
    return fib(n-1) + fib(n-2);
}

int main(){
    
    // cout<<sum(2);
    // cout<<powerOf(4, 2);
    // cout<<fact(5);
    cout<<fib(10);

    return 0;
}