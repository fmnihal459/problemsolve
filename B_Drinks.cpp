#include<bits/stdc++.h>
using namespace std;

int main(){

double n,a;
cin>>n;
double x= 0;

for(int i=0;i<n;i++){

    cin>>a;
    x += a/100;
}

cout<<fixed<<setprecision(12)<<(x*100)/n;

    return 0;
}