#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;

    vector<int>v(4);

    cin>>t;

    for(int i =0; i<t; i++){
        
        int c = 0;

        cin>>v[0];

        for(int i = 1; i<4; i++){

               cin>>v[i];

               if(v[0]<v[i]) c++;
        }
        cout<<c<<endl;
    }

    


    return 0;
}