#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t, n, k;

    cin >> t;

    while (t--)
    {

        cin >> n >> k;

        vector<int> v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i];

        if (k > 1)
        {
            cout << "YES\n";
        }
        else
        {
            if (is_sorted(v.begin(), v.end()))
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }

    return 0;
}