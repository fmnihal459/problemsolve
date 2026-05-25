#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
int a[101];
cin>>n;
int t = 0;
for(int i = 0;i<n;i++){
    cin>>a[i];
    t +=a[i];
}

sort(a, a+n, greater<int>());

int x = t/2;
int j = 0;
int tt = 0;
for(int i = 0; i<n;i++){
   
    tt += a[i];
    j++;
    if(tt>x) break;
    
}
cout<<j;

    return 0;
}