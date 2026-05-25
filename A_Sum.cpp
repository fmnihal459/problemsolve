#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,a,b,c;

    cin>>t;

    for(int i = 0; i<t; i++){
        cin>>a>>b>>c;

        if(a == (b+c)){
            cout<<"YES\n";
        }else if(b == (a+c)){
            cout<<"YES\n";
        }else if(c == (a+b)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }

    return 0;
}