#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[101];

    int even= 0;
    int odd = 0;

    for(int i = 1; i <= n; i++){
        cin>>arr[i];
        if(arr[i]%2 == 0){
            even++;
        }else{
            odd++;
        }
    }

    if(even>odd){
        for(int i =1; i<=n; i++){
            if(arr[i]%2 != 0){
                cout<<i;
                return 0;
            }
        }
    }else{
        for(int i = 1; i<=n; i++){
            if(arr[i]%2==0){
                cout<<i;
                return 0;
            }
        }
    }

    return 0;
}