#include<bits/stdc++.h>
using namespace std;

int main(){

int n,p,q;
cin>>n;

set<int>level;
cin>>p;
for(int i = 0;i < p;i++ ){
    int x;
    cin>>x;
    level.insert(x);
}
cin>>q;
for(int i = 0;i < q;i++ ){
    int x;
    cin>>x;
    level.insert(x);
}

if(level.size() == n){
    cout<<"I become the guy.";
}else{
    cout<<"Oh, my keyboard!";
}

    return 0;
}