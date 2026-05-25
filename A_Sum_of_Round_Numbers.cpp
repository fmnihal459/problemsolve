#include<bits/stdc++.h>
using namespace std;

int main(){

int t,n;

cin>>t;

for(int i=0; i<t; i++){
    
    cin>>n;

    int s = 1;

    vector<int>v;

    while(n>0){
        int dig = n%10;

        if(dig != 0){
            v.push_back(dig * s);
        }
        n/=10;
        s*=10;
    }
    cout<<v.size()<<endl;
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


    return 0;
}