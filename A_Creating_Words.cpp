#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;

    cin >> t;

    while (t--)
    {
        string a, b;

        cin >> a >> b;

        char x, y;

        x = b[0];
        y = a[0];

        a[0] = x;
        b[0] = y;

        cout << a << " " << b << endl;
    }

    return 0;
}