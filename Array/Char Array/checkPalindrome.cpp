#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;

    bool isPalindrome = true;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n-1-i])
        {
            isPalindrome = false;
            break;
        }
        
    }
    
    if (isPalindrome)
    {
        cout<<arr<<" is palindrome!"<<endl;
    }
    else
    {
        cout<<arr<<" is not a palindrome!"<<endl;
    }
    

    return 0;
}