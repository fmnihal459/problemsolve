#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;

    cin>>n;

    string s;
    
    for(int i = 0; i<n ; i++){
        cin>>s;

        for(int i = 0; i<3; i++){
            s[i]= tolower(s[i]);
        }
        if(s=="yes") cout<<"YES"<<endl;
        else cout<<"NO\n";
    }
    
    return 0;

}