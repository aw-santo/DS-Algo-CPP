#include<iostream>

using namespace std;

void invertedPattern(int n){
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
}

void zero_onePattern(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i+j) % 2 == 0)
            {
                cout<< 1 <<" ";
            }
            else{
                cout<< 0 <<" ";
            }
        }
        cout<<endl;
    }
    
}

void rhombusPattern(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = n-i; j >= 1; j--)
        {
            cout<<" ";
        }
        
        for (int k = 1; k <= n; k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
}

void numberPattern(int n){
    for (int i = 1; i <= n; i++)
    {
        /* code */
    }
    
}

int main(){

    int n;
    cin>>n;

    // invertedPattern(n);

    // zero_onePattern(n);

    // rhombusPattern(n);

    numberPattern(n);

    return 0;
}