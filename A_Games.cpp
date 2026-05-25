#include<bits/stdc++.h>
using namespace std;

int main(){

int n;

cin>>n;

int h[31], g[31];

for(int i=0;i<n;i++){
    cin>>h[i]>>g[i];
}

int x =0;

for(int i=0;i<n;i++){
    for(int j = 0;j<n;j++){
        if(i != j && h[i] == g[j]){
            x++;
        }
    }
}


cout<<x;



    return 0;
}