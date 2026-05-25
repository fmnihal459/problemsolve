#include<bits/stdc++.h>
using namespace std;

int main(){

    int a,b,c,d;

    cin>>a>>b>>c>>d;

    int t = max(max(a,b),max(c,d));
     
    if(t != a){
        cout<<t-a<<" ";
    }if(t != b){
        cout<<t-b<<" ";
    }if(t != c){
        cout<<t-c<<" ";
    }if(t != d){
        cout<<t-d<<" ";
    }
    

    return 0;
}