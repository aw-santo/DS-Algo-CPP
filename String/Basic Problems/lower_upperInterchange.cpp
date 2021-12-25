#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    
    // string s = "a";
    // cout<<'f' - 'F';

    string str = "sanket";
    // // to uppercase
    // for (int i = 0; i < str.length(); i++)
    // {
    //     if (str[i]>='a' && str[i]<='z')
    //     {
    //         str[i] -= 32;
    //     }
    // }
    // cout<<str<<endl;

    // //to lowercase
    // for (int i = 0; i < str.length(); i++)
    // {
    //     if (str[i]>='A' && str[i]<='Z')
    //     {
    //         str[i] += 32;
    //     }
    // }
    // cout<<str<<endl;

    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout<<str<<endl;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout<<str;
    return 0;
}