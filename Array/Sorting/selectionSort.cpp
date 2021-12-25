#include<iostream>

using namespace std;

void selectionSort(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    return;
}

int main(){

    int arr[] = {12, 45, 23, 51, 19, 8};
    int n = 6;

    selectionSort(arr, n);

    return 0;
}