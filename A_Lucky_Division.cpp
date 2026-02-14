#include<bits/stdc++.h>
using namespace std;

int main(){

int s;

cin>>s;

int l[]={4, 7, 44,47,74,77,444,447,474,744,774,777,477,747};

for(int i=0;i<14;i++){

    if(s%l[i]==0){
        cout<<"YES";
        return 0;
    }
}

cout<<"NO";

    return 0;
}