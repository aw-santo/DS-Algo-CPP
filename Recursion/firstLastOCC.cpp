#include<bits/stdc++.h>

using namespace std;

int fOCC(int arr[], int n, int i, int key){
    if (i==n)
    {
        return -1;
    }
    if (arr[i]==key)
    {
        return i;
    }
    return fOCC(arr, n, i+1, key);
}

int lOCC(int arr[], int n, int i, int key){
    int res = lOCC(arr, n, i+1, key);
    if(res!=-1){
        return res;
    }
    if (arr[i]==key)
    {
        return i;
    }
    return -1;
}

int main(){
    int arr[]= {4, 2, 1, 2, 5, 2, 7};
    cout<<fOCC(arr, 7, 0, 2)<<endl;
    cout<<lOCC(arr, 7, 0, 2);
    return 0;
}