#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    char arr[n+1];
    cin.ignore();
    cin.getline(arr, n);
    cin.ignore();

    int mx = INT_MIN;
    int currLength = 0;
    int st=0, maxSt=0;
    for (int i = 0; i < n; i++)
    {
        // st=i;
        if (arr[i] == ' ' || arr[i] == '\0')
        {
           if (currLength>mx)
           {
                   
               mx = currLength;
               maxSt = st;
               
               
           }
           
            currLength=0;
            st=i+1;
        }
        else
        {
            
        currLength++;
        }
        
    }
    for (int i = st; i < mx; i++)
    {
        cout<<arr[i+maxSt];
    }
    
    
    cout<<mx;

    return 0;
}