#include<bits/stdc++.h>

using namespace std;

int main(){

    // int n;
    // cin>>n;

    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }
    
    // const int N = 1e6;
    // int idx[N];
    // for (int i = 0; i < N; i++)
    // {
    //     idx[i]=-1;
    // }
    
    // int minIndex = INT_MAX;

    // for (int i = 0; i < n; i++)
    // {
    //     if (idx[arr[i]] != -1)
    //     {
    //         minIndex = min(minIndex, idx[arr[i]]);
    //     }
    //     else
    //     {
    //         idx[arr[i]] = i;
    //     }
        
    // }
    
    // if (minIndex == INT_MAX)
    // {
    //     cout<<-1<<endl;
    // }
    // else
    // {
    //     cout<<minIndex+1<<endl;
    // }
    
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int N = 1e6;
    int indexArray[N];
    for (int i = 0; i < N; i++)
    {
        indexArray[i] = -1;
    }

    int count = INT_MAX;
    
    for (int i = 0; i < n; i++)
    {
        if (indexArray[arr[i]] == -1)
        {
            indexArray[arr[i]] = i;
        }
        else{
            count = min(count, indexArray[arr[i]]);
        }
    }
    
    if (count == INT_MAX)
    {
        cout<<-1<<endl;
    }
    else{
        cout<<count<<endl;
    }

    return 0;
}