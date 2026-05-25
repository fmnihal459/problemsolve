#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if(n < 2) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    
    for(int i = 3; i * i <= n; i += 2) {
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    long long x;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> x;
        
        long long root = sqrt(x);
        
        if(root * root == x && isPrime(root)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}