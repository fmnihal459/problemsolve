#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;
int a=0;

for(int i=0;i<n;i++){

int x,y,z;

cin>>x>>y>>z;
int sum=x+y+z;

if(sum>1)
a++;
}

cout<<a;


    return 0;
}