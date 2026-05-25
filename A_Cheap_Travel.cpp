#include<bits/stdc++.h>
using namespace std;

int main(){

    int a,b,c,d;

    cin>>a>>b>>c>>d;

    int x = a * c;
    int y = ((a + b - 1)/b) * d;
    int z = (a/b) * d + (a%b) * c;

    cout<<min(x,min(y,z));

    return 0;
}