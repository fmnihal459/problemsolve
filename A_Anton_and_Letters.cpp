#include<bits/stdc++.h>
using namespace std;

int main(){

string s;
set<char>s1;

getline(cin,s);

for(int i = 0; i<s.length(); i++){
    if(isalpha(s[i])){
        s1.insert(s[i]);
    
    }
}

cout<<s1.size();

    return 0;
}