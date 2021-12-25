#include "bits/stdc++.h"

using namespace std;

int maxTill(int arr[], int n, int i){
    int maxi = INT_MIN;
    for (int j = 0; j < i; j++)
    {
        maxi = max(maxi, arr[j]);
    }
    return maxi;
}

int main(){
    
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int i;
    cin>>i;

    cout<<"Till "<<i<<", "<<maxTill(arr, n, i)<<" is maximum!"<<endl;
    return 0;
}