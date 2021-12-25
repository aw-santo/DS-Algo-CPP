#include<iostream>

using namespace std;

int main(){

    int n, reverse_n=0;
    cin>>n;

    while (n>0)
    {
        int a = n%10;
        reverse_n = reverse_n*10 + a;
        n/=10; 
    }
    
    cout<<reverse_n;
    return 0;
}