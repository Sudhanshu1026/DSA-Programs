#include<iostream>
using namespace std;

int main(){
// DEFANGING AN IP ADDRESS
string s = "1.1.1.1" ;

int index=0;
string ans;

while(index<s.size()){

    if(s[index]=='.')
    ans=ans+"[.]";
    else
    ans=ans+s[index];

    index++;
}


cout<<ans;

    return 0;
}