#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n,x;

    cin>>n;

    int c = 0;

    int  p = 0;

    for(int i = 0; i<n; i++){

        cin>>x;
        if(x<0 && p==0){
               c++;
        }else if(x<0 && p>0){
               p--;
        }else{
            p+=x;
        }
    }

    cout<<c;

    return 0;
}