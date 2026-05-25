#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;

string s;

int o = 0;

for(int i = 0; i<n; i++){

    cin>>s;
    if(s == "Tetrahedron"){
        o+=4;
    }
    else if(s == "Cube"){
        o+=6;
    }else if(s == "Octahedron"){
        o+=8;
    }else if(s == "Dodecahedron"){
        o+=12;
    }else if(s == "Icosahedron"){
        o+=20;
    }
}

cout<<o;




    return 0;
}