#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int k, r;

    cin>>k>>r;

    int i = 0;

    while(true){
        i++;
        int x = k*i;
        if(x%10 == r or x%10 == 0){
            cout<<i;
            return 0;
        }
    }


    return 0;
}