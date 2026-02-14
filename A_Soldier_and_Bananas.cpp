#include<bits/stdc++.h>
using namespace std;

int main(){

int k,n,w;

cin>>k>>n>>w;
int b=0;

for(int i=1;i<=w;i++){

int s= i*k;
b+=s;

}
if(b>n)
cout<<b-n;
else
cout<<0;
    return 0;
}