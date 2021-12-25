#include<iostream>

using namespace std;

int fact(int n){
    int f=1;
    for (int i = n; i >= 1; i--)
    {
        f *= i;
    }
    return f;
}

int fact_recursive(int n){
    if (n==0 || n==1)
    {
        return 1;
    }
    return n*fact_recursive(n-1);
}

int main(){
    int n;
    cin>>n;

    cout<<fact(n)<<endl;
    cout<<fact_recursive(n);

    return 0;
}