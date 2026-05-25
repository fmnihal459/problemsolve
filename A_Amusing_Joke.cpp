#include<bits/stdc++.h>
using namespace std;

int main(){
   string a,b,c;

   cin>>a>>b;
   string t = a+b;
   sort(t.begin(), t.end());
   cin>>c;
   sort(c.begin(), c.end());

   if(t == c){
    cout<<"YES";
   }else cout<<"NO";

    return 0;
}