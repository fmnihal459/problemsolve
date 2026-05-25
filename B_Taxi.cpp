#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;

    cin>>n;

    int a = 0, b = 0, c = 0, d = 0;

    for(int i =0; i<n ; i++){
        cin>>x;

        if(x == 1) a++;
        else if(x == 2) b++;
        else if(x == 3) c++;
        else d++;
    }

    int cars = d;
    
    if(c == a){
        cars+=a;
        a =0;
        c = 0;

    }else if(c >a){
        cars+=a;
        c -= a;
        cars+=c;
        a = 0;
        c = 0;
    }else{
        cars+=c;
        a -= c;
        c=0;
    }

     cars += (b/2);

    if(b%2){

        cars++;
        a -= 2;
    }
    if(a>0){
        cars+= (a+3)/4;
    }

    cout<<cars<<endl;
}