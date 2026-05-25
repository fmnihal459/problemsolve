#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t, n;

    cin >> t;

    while (t--)
    {

        cin >> n;

        int arr[n];

        int s = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            s += arr[i];
        }

        if (s % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}