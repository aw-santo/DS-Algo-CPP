#include<bits/stdc++.h>

using namespace std;

int longestSubArray(int arr[], int n){
    int cd = arr[1] - arr[0];
    int current = 2;
    int count = 2;
    for(int i=1; i<n; i++){
        if(arr[i+1] - arr[i] == cd){
            current+=1;
        }
        else{
            current = 2;
            cd = arr[i+1] - arr[i];
        }
        count = max(count, current);
    }
    return count;
}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<longestSubArray(arr, n);

    /*
        int longestSubArray(int arr[], int n){
            int cd = arr[1] - arr[0];
            int current = 2;
            int count = 2;
            for(int i=1; i<n; i++){
                if(arr[i+1] - arr[i] == cd){
                    current+=1;
                }
                else{
                    current = 2;
                    cd = arr[i+1] - arrr[i];
                }
                count = max(count, current);
            }
            return count;
        }

    */

    return 0;
}