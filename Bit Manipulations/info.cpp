#include<bits/stdc++.h>

using namespace std;

int getBit(int num, int pos){
    return ((num & (1<<pos)) != 0);
}

int setBit(int num, int pos){    // set to 1
    return (num | (1<<pos));
}

int clearBit(int num, int pos){
    return num & (~(1<<pos));
}

int updateBit(int num, int pos, int val){
    num = clearBit(num, pos);
    return num | (val<<pos);
}

int main(){
    // cout<<getBit(5, 2);
    // cout<<setBit(5, 1);
    // cout<<clearBit(5, 2);
    cout<<updateBit(5, 1, 1);
    return 0;
}