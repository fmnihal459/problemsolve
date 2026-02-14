#include<bits/stdc++.h>
using namespace std;

int main(){
int n,x;
cin>>n;
int xs=0, ys=0, zs=0;
for(int i=0;i<n;i++){
   for(int j=0;j<3;j++){
     
cin>>x;
if(j==0) xs+=x;
else if(j==1) ys+=x;
else zs+=x;

   }


}
if(xs==0 && ys==0 && zs==0){
    cout<<"YES";
}else
 cout<<"NO";

    return 0;
}