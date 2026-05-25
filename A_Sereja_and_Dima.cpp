#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;

    cin>>n;

    vector<int>v(n);

    for(int i = 0; i<n; i++){
        cin>>v[i];
    }
    int x = 0;
    int y = 0;
    bool t = true;

   while(!v.empty()){
         if(v.front()>v.back()){
            if(t) x+= v.front();
            else  y+= v.front();
            v.erase(v.begin());
         }else{
            if(t) x+= v.back();
            else  y+= v.back();
            v.pop_back();
         }

         t = !t;

   }

   cout<<x<<" "<<y;

    return 0;
}