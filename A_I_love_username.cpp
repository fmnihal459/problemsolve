#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, x;

    cin>>n;
  
    int min , max;

    int amz = 0;

    for(int i=0; i<n; i++){
        cin>>x;
        if(i == 0){
              min = x;
              max = x;
        }
        if(x>max){
            amz++;
            max = x;
        }
        if(x<min){
            amz++;
            min = x;
        }
    }

    cout<<amz<<endl;

    return 0;
}