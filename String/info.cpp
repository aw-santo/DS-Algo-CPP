#include<iostream>
#include<string>

#include<algorithm>

using namespace std;

int main(){
    
    // string str;
    // cin>>str;
    // cout<<str;

    // string str(5, 's');
    // cout<<str;

    // string str = "sanket";
    // cout<<str;

    // string str;
    // getline(cin, str);  // with spaces 
    // cout<<str;

    // string s1, s2;
    // s1="fam";
    // s2="ily";
    // cout<<s1+s2;

    // s1.append(s2);
    // cout<<(s1[6]=='\0');

    // string abc = "hbfui uiwrhgu guwhuibqegf wguuieb gqeghfuiewbg oub gubgouqrlbgrq";
    // cout<<abc<<endl;
    // abc.clear();
    // cout<<abc;

    // string s1 = "abc";
    // string s2 = "xyz";
    // cout<<s2.compare(s1);

    // string str = "duieue jeje ekjedfj";
    // cout<<str.empty();
    // cout<<str<<endl;
    // str.clear();
    // cout<<str.empty();

    // string st = "sanket is chutiiya";
    // st.erase(3, 3); //erase from and how many chars
    // cout<<st;

    // string str = "sanket";
    // cout<<str.find("n");

    // string str = "sanket";
    // str.insert(6, "\tlol!");
    // cout<<str;

    // cout<<str.size();
    // cout<<str.length();

    // string s = "companYandNoobs";
    // cout<<s.substr(6, 4); //start and ow many

    // string nstr = "786";
    // int x = stoi(nstr);
    // cout<<x+45;

    // int x = 786;
    // string s = to_string(x);
    // cout<<s;

    string str = "sanket";
    sort(str.begin(), str.end());
    cout<<str;
    return 0;
}