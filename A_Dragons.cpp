#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int s,n;

    cin>>s>>n;
    
    vector<pair<int,int>>drag(n);

    for(int i = 0; i<n; i++){
        cin>>drag[i].first>>drag[i].second;
    }

    sort(drag.begin(), drag.end());

    for(int i = 0; i<n; i++){
        if(s>drag[i].first){
            s+=drag[i].second;
        }else{
            cout<<"NO";
            return 0;
        }
    }

    cout<<"YES";

    return 0;
}