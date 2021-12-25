#include<iostream>

using namespace std;

int linearSearch(int arr[], int n, int key){
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
        
    }
    return -1;
}

int binarySearch(int arr[], int n, int key){
    int start=0, end=n;
    
    while (start <= end)
    {
        int mid = (start + end) /2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return -1;
}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int key;
    cin>>key;

    // cout<<sizeof(arr);
    // cout<<linearSearch(arr, n, key);

    cout<<binarySearch(arr, n, key);

    return 0;
}