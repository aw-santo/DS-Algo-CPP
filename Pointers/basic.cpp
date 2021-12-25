#include<bits/stdc++.h>

using namespace std;

void print(int** p){
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;
}

int main(){
    int var = 10;
    int* ptr =&var;
    print(&ptr);
    cout<<&ptr;
    return 0;
}