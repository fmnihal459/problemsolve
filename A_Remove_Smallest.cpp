#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;

    cin >> t;

    for (int i = 0; i < t; i++)
    {

        bool s = true;

        int n;

        cin >> n;

        vector<int> v(n);

        for (int j = 0; j < n; j++)
        {
            cin >> v[j];
        }

        sort(v.begin(), v.end());

        for (int k = 1; k < n; k++)
        {
            if (abs(v[k] - v[k - 1] > 1))
            {
                s = false;
                break;
            }
        }

        if (s)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}