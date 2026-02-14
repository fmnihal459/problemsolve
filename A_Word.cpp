#include<bits/stdc++.h>
using namespace std;

int main(){

string s;
cin>>s;

int u=0;
int l=0;
for(char c: s){
if(isupper(c)) u++;
else l++;
}

for(int i=0;i<s.size();i++){
    if(u>l) s[i]=toupper(s[i]);
    else s[i]=tolower(s[i]);
}
cout<<s;

    return 0;
}