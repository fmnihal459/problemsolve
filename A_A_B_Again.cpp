#include<bits/stdc++.h>
using namespace std;

int main(){

  int t,n;

  cin>>t;

  for(int i = 0; i<t ; i++){
    cin>>n;

    int x = n/10;
    int y = n%10;

    cout<<x+y<<endl;
    
  }


    return 0;
}