#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t, n;

    cin >> t;

    string s;

    for (int i = 0; i < t; i++)
    {

        cin >> n;

        cin >> s;

        int op = count(s.begin(), s.end(), '(');

        int cl = n - op;

        if (n % 2 == 0 && op == cl)
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