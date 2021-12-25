#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, s;
    cin>>n>>s;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int i=0, j=0, st=-1, en=-1, sum=0;

    while (j<n && sum+arr[j] <= s)
    {
        if (sum ==s)
        {
            cout<<i<<j;
            return 0;
        }
        sum += arr[j];
        j++;
        
    }
    
    

    while (j<n)
    {
        sum += arr[j];
        while (sum>s)
        {
            sum -= arr[i];
            i++;
        }
        if (sum == s)
        {
            st=i;
            en=j;
            break;
        }
        j++;
        
    }
    cout<<st<<" "<<en;

    return 0;
}