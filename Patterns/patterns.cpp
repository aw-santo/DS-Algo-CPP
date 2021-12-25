#include<iostream>

using namespace std;

void rectPattern(int row, int col){
    for(int i = 1; i <= row; i++){
        for (int j = 1; j <= col; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

void hollowRect(int row, int col){
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (i==1 || i==row || j==1 || j==col)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    
}

void invertedHalfPyramid(int row){
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row - i +1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}

void halfPyramid180(int row){
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            if ((i + j) > row)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
}

void halfPyramidNum(int row){
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<i;
        }
        cout<<endl;   
    }
    
}

void floydsTraingle(int row){
    int a = 1;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<< a++<<" ";
        }
        cout<<endl;
    }
    
}

void butterflyPattern(int n){
    for (int i = 1; i <= n*2; i++)
    {
        if(i <= n){
            for (int j = 1; j <= n*2; j++)
            {
                if (j <= i || ((i + j) > n*2))
                {
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        else{

            for (int j = 1; j <= n*2; j++)
            {
                /* code */
            }
            
        }
        cout<<endl;
    }
    
}

int main(){
    int row, col, n;
    // cin>>row>>col;

    // rectPattern(row, col);

    // hollowRect(row, col);

    
    cin>>n;

    // invertedHalfPyramid(n);

    // halfPyramid180(n);

    // halfPyramidNum(n);

    // floydsTraingle(n);

    butterflyPattern(n);
    
    return 0;
}