#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, l;

    cin>>n>>l;

    double arr[n+1];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr, arr+n);

    double x = 0;

    for(int i = 0; i<n-1; i++){
        double y = (arr[i+1] - arr[i])/2.0;
        if(y>x){
            x = y;
        }
    }

    x = max(x, arr[0]);
    x = max(x, (double)l - arr[n-1]);

    cout<<fixed<<setprecision(10)<<x;

    return 0;
}