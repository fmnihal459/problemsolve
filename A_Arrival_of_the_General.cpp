#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    
    cin>>n;
    int arr[n];
    int maxI = 0;
    int minI = 0;
    
    cin>>arr[0];
    
    for(int i = 1; i < n;  i++){
       cin>>arr[i];
       if(arr[i]>arr[maxI]){
           maxI = i;
       }
       else if(arr[i]<=arr[minI]){
           minI = i;
       }
    }
    int swap = maxI + (n - 1 - minI);

    if(maxI>minI){
        swap--;
    }

    cout<<swap;

    return 0;
}