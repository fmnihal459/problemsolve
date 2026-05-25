#include<bits/stdc++.h>
using namespace std;

int main(){

   int n, k;

   cin>>n>>k;

   int l = 240 - k;

   int  p = 0;

   for(int  i = 1; i<=n; i++){
      if(l >= 5 * i){
           p++;
           l -= 5 * i;
       } else {
           break;
       }

   }
cout<<p;

    return 0;
}