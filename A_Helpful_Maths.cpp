#include<bits/stdc++.h>
using namespace std;

int main(){

string s;
cin>>s;
if(s.size()==1){
cout<<s;
return 0;
}
string s1;
for(int i=0;i<s.size();i++){

if(s[i]!='+'){
s1.push_back(s[i]);

}

}
sort(s1.begin(),s1.end());
for(int i=0;i<s1.size()-1;i++){
    cout<<s1[i]<<"+";
}
cout<<s1[s1.size()-1];
    return 0;
}