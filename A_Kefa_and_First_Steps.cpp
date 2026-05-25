#include<bits/stdc++.h>
using namespace std;

int main(){

int n,s,q;
cin>>n>>s;

int seq = 1;
int seqm = 1;


    for(int i = 1; i < n; i++){
    cin>>q;
    if(q<s){
          seq = 1;
    }
    else if(s<=q){
        seq++;
        if(seq>seqm){
            seqm = seq;
        }
    }
    s = q;
}


cout<<seqm;



    return 0;
}