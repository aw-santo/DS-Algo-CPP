#include<iostream>

using namespace std;

int sum_n_natural(int n){

    // return n*(n+1)/2; // formula

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

void pythagorianTriplet(int a, int b, int c){
    int x = max(a, max(b, c));
    if (x*x == a*a + b*b + c*c - x*x)
    {
        cout<<a<<", "<<b<<" and "<<c<<" are pythagorian triplet"<<endl;
    }
    else{
        cout<<a<<", "<<b<<" and "<<c<<" are not pythagorian triplet"<<endl;
    }
    return;
}

int main(){
    
    // 1. Sum of first 'n' natural nums
    // int n;
    // cin>>n;
    // cout<<sum_n_natural(n)<<endl;

    // 2. check pythagorian triplet
    int a, b, c;
    cin>>a>>b>>c;
    pythagorianTriplet(a, b, c);

    return 0;
}