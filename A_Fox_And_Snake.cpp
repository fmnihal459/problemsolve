#include<bits/stdc++.h>
using namespace std;

int main(){

int n,m;

cin>>n>>m;

int x = 0;

for(int i=1;i<=n;i++){
    if(i%2 != 0){
        for(int j = 1;j<=m;j++){
            cout<<"#";
        }
    }
    else if(i%4 != 0){
        for(int k = 1;k<m;k++){
            cout<<".";
        }
        cout<<"#";
    }
    else{
        cout<<"#";
        for(int l = 1;l<m;l++){
            cout<<".";
        }
    }
    cout<<endl;
}


    return 0;
}