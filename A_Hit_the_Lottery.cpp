#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;
int o =0;
if (n/100 != 0){
    o += n/100;
    n -= (100 * (n/100));
}
o += n/20;
n -= (20 * (n/20));
o += n/10;
n -= (10 * (n/10));
o += n/5;
n -= (5 * (n/5));
o += n/1;
n -= (1 * (n/1));

 cout<<o;   


    return 0;
}