#include <iostream>
 
using namespace std;
 
int main() {
    string s,v;
    int i;
    cin>>s>>v;
    for(i=0;i<s.length();i++)
    {
        if(s[i]==v[i])
        s[i]='0';
        else
        s[i]='1';
    }
   cout<<s;
}