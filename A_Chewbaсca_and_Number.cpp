#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;

    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        int d = s[i] - '0';

        if (i == 0)
        {
            if (d == 9)
            {
                cout << 9;
            }
            else
            {
                cout << min(d, 9 - d);
            }
        }
        else
        {
            cout << min(d, 9 - d);
        }
    }

    return 0;
}