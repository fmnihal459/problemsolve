#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t, n, k;

    cin >> t;

    while (t--)
    {
        cin >> n >> k;

        bool y = false;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            if (k == arr[i])
                y = true;
        }

        cout << (y ? "YES" : "NO") << endl;
    }

    return 0;
}