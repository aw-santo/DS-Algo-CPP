#include<iostream>

using namespace std;

int main(){

    int n, num=0, n1;
    cin>>n;
    n1 = n;
    while (n1>0)
    {
        int lastdigit = n1%10;
        num = num + lastdigit*lastdigit*lastdigit;
        n1/=10;
    }
    
    if (n == num)
    {
        cout<<n<<" is an Armstromg Number";
    }
    else{
        cout<<n<<" is not an Armstrong Number";
    }
    

    return 0;
}