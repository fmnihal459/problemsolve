#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;

    cin>>t;

    string s = "codeforces";

    char c;

    while(t--){
        cin>>c;

        if(s.contains(c)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }

    return 0;
}