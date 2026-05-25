#include<bits/stdc++.h>
using namespace std;

int main(){

string s;

cin>>s;

bool sp = false;

for(int i = 0; i< s.length();i++){
    if(s.substr(i,3) == "WUB"){
        if(!sp){
        cout<<" ";
       
        sp = true;
        }
         i +=2;
        
    }else{
        cout<<s[i];
        sp = false;
    }
}

    return 0;
}