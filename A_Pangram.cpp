#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
string s;
bool see[26] = {false};

cin>>n>>s;
int t = 0;

for(int i = 0;i<n;i++){
    s[i] = tolower(s[i]);
    int j = s[i] - 'a';
    if(!see[j]){
        see[j] = true;
        t++;
    } 
}

if(t == 26){
    cout<<"YES";
}
else{
    cout<<"NO";
}
    return 0;
}