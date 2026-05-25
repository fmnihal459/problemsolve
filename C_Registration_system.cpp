#include<bits/stdc++.h>
using namespace std;

int main(){

int n;

cin>>n;

map<string, int>c;

for(int i= 0; i<n; i++){
     string s;
     cin>>s;

     if(c[s]==0){
        cout<<"OK\n";
        c[s]=1;
     }else{
        cout<<s<<c[s]<<endl;
        c[s]++;
     }
}




    return 0;
}