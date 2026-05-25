#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t, n, x;

    cin >> t;

    while (t--)
    {
        cin >> n >> x;

        int arr[n];

        int y = 0;

        int oil = 0;

        for (int i = 0; i < n; i++)
        {
            int ol = 0;
            cin >> arr[i];
            ol += arr[i] - y;
            y = arr[i];

            oil = max(oil, ol);
        }
        int z = (x - y) * 2;
        cout << max(z, oil) << endl;
    }

    return 0;
}