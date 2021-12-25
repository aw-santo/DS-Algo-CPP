#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, m;
    cin>>n>>m;

    int key;
    cin>>key;

    int mat[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>mat[i][j];
        }
        
    }
    
    int r=0, c=m-1;
    bool found = false;
    while (r<n && c>=0)
    {
        if (mat[r][c] == key)
        {
            found = true;
        }
        if (key > mat[r][c])
        {
            r++;
        }
        else{
            c--;
        }
    }
    if (found)
    {
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }

    return 0;
}