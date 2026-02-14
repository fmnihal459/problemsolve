#include<bits/stdc++.h>
using namespace std;

int main(){

string s;
cin>>s;
int cnt=0;
for(char c:s){
if(c=='4' || c=='7'){
    cnt++;
}
}
if(cnt==0) cout<<"NO";
else if(cnt!= 4 && cnt!=7) cout<<"NO";
else cout<<"YES";

return 0;

}