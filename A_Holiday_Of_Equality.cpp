#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int m = *max_element(arr, arr + n);

    int x = 0;

    for (int i = 0; i < n; i++)
    {
        x += (m - arr[i]);
    }

    cout << x;

    return 0;
}