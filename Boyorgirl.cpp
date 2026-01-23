#include<bits/stdc++.h>
using namespace std;

int main(){

string s;

cin>>s;

bool seen[26]={false};

int dis=0;

for(char c:s){
    int index=c-'a';

    if(!seen[index]){
        seen[index]=true;
        dis++;
    }
}

if(dis%2==0){
    cout<<"CHAT WITH HER!";
}
else{
    cout<<"IGNORE HIM!";
}



    return 0;
}