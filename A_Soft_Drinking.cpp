#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, k, l, c, d, p, nl, np;

    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int ml = (k*l)/nl;

    int li = (c*d);

    int sa = (p/np);

    int f = min(ml,min(li,sa))/n;

    cout<<f;

    return 0;
}