#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, t;

    cin >> n >> t;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int l = 0;
    long long s = 0;
    int ans = 0;

    for (int r = 0; r < n; r++)
    {

        s += v[r];

        while (s > t)
        {
            s -= v[l];
            l++;
        }

        ans = max(ans, r - l + 1);
    }

    cout << ans;

    return 0;
}