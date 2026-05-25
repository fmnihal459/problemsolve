#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t, x, y;

    cin >> t;

    for (int i = 0; i < t; i++)
    {

        cin >> x >> y;

        if (x % 2 == 0 && y % 2 != 2)
        {
            cout << "YES\n";
        }
        else if (x % 2 != 2 && y % 2 == 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}