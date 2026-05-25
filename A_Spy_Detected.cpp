#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t, n;

    cin >> t;

    while (t--)
    {
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int c;

        if (v[0] == v[1])
            c = v[0];
        else if (v[0] == v[2])
            c = v[0];
        else
            c = v[1];

        for (int j = 0; j < n; j++)
        {
            if (v[j] != c)
            {
                cout << j + 1 << endl;
                break;
            }
        }
    }

    return 0;
}