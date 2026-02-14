#include<bits/stdc++.h>
using namespace std;

int main(){

int n, h, x;
cin>>n>>h;
int w=0;
for(int i=0;i<n;i++){
      cin>>x;
      if(x>h){
        w+=2;
      }else w++;

}

cout<<w;
    return 0;
}