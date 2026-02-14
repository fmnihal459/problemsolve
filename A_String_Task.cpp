#include<bits/stdc++.h>
using namespace std;

bool check(char c){
if(c=='a'|| c=='e'||c=='i'|| c=='o'|| c=='u'|| c=='y') return false;

else return true;

}

int main(){

string s,s1;

cin>>s;

for(int i=0;i<s.size();i++){

s[i]=tolower(s[i]);

if(check(s[i])){
    s1.push_back(s[i]);
}

}

for(int i=0;i<s1.size();i++){

cout<<"."<<s1[i];


}


}