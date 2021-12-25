#include<iostream>
#include<cmath>

using namespace std;

int main(){

    int n;
    cin>>n;
    bool flag=1;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {   
            flag=0;
            cout<<n<<" is not prime";
            break;
        }
        
    }
    if (flag)
    {
        cout<<n<<" is prime";
    }
    
     return 0;
}