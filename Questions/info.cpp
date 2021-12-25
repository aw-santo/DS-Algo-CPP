#include<bits/stdc++.h>

using namespace std;

void swap(int *a, int *b){
    // int temp = *a;
    // *a = *b;
    // *b = temp;
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main(){
    // int a = 10;
    // int *aptr;
    // aptr = &a;
    // cout<<a<<" : "<<aptr<<endl;

    // cout<<"a : "<<a<<endl;
    // cout<<"aptr : "<<aptr<<endl;
    // cout<<"*aptr : "<<*aptr<<endl;
    // cout<<"&aptr : "<<&aptr<<endl;

    // int arr[] = {10, 20, 30};
    // cout<<*arr<<endl;

    // int *ptr = arr;
    // for (int i = 0; i < 3; i++)
    // {
    //     cout<<*(arr+ i)<<endl; //since arr is array arr++ goes to next index and not the +=4;
    //     // ptr++;
    // }

    int a=2;
    int b=7;
    cout<<a<<" "<<b<<endl;
    swap(&a, &b);
    cout<<a<<" "<<b<<endl;
    
    return 0;
}