#include<bits/stdc++.h>
using namespace std;

int main(){

int n,g,a,b;
cin>>n;
if(n==0){
    cout<<0;
    return 0;
}
else if(n==1){
    cout<<1;
    return 0;
}
cin>>a;
g = 1;

for(int i = 0; i<n; i++){
cin>>b;

if(a!=b){
    g++;
    a=b;
}
else a=b;

}
cout<<g;

    return 0;
}