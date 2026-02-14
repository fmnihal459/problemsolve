#include<bits/stdc++.h>
using namespace std;

int main(){

int n,a,b;
cin>>n;
vector<int>v={0};
int x=0;
for(int i= 0;i<n;i++){

cin>>a>>b;

x+=b;
x-=a;

v.push_back(x);

}


cout<<*max_element(v.begin(),v.end());

    return 0;
}