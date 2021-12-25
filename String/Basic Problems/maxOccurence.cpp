#include<bits/stdc++.h>

using namespace std;

int main(){
    
    string str = "sanketn";
    int count[26];
    for (int i = 0; i < 26; i++)
    {
        count[i]=0;
    }
    for (int i = 0; i < str.length(); i++)
    {
        count[str[i]- 'a']++;
    }
    char ans = 'a';
    int maxCount = 0;
    for (int i = 0; i < 26; i++)
    {
        if (count[i]>maxCount)
        {
            maxCount = count[i];
            ans = i + 'a';
        }
        
    }
    
    cout<<ans<<" "<<maxCount;
    
    return 0;
}