#include<bits/stdc++.h>
using namespace std;


int main(){
    
    // int n, m;
    // cin>>n>>m;

    int arr[5][6] = {{1, 5, 7, 9, 1, 11}, 
                     {6, 10, 12, 13, 20, 21}, 
                     {9, 25, 29, 30, 32, 41}, 
                     {15, 55, 59, 63, 68, 70}, 
                     {40, 70, 79, 81, 95, 105}};
    // int arr[n][m];
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cin>>arr[n][m];
    //     }
        
    // }
    
    //  spiral order

    int r_start=0, r_end=4, c_start=0, c_end=5;
    while (r_start <= r_end && c_start <= c_end)
    {
        // for rowstart
        for (int col = c_start; col <= c_end; col++)
        {
            cout<<arr[r_start][col]<<" ";
        }
        r_start++;

        //for colend
        for (int row = r_start; row <= r_end; row++)
        {
            cout<<arr[row][c_end]<<" ";
        }
        c_end--;

        //for rowend
        for (int col = c_end; col >= c_start; col--)
        {
            cout<<arr[r_end][col]<<" ";
        }
        r_end--;
        
        for (int row = r_end; row >= r_start; row--)
        {
            cout<<arr[row][c_start]<<" ";
        }
        c_start++;
        cout<<endl;
        
    }
    
    return 0;
}