#include<bits/stdc++.h>
using namespace std;

int main(){

    int a,b;

    cin>>a>>b;

    cout<<min(a,b)<<" ";

    int x = (max(a,b) - min(a,b))/2;

    cout<<x;

    return 0;
}