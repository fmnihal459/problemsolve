#include<bits/stdc++.h>
using namespace std;

int main(){

    int t,a,b;

    cin>>t;

    for(int i = 0; i<t; i++){

        cin>>a>>b;

        int x = abs(a - b);

        cout<<(x+9)/10<<endl;
    }


    return 0;
}