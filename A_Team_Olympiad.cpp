#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;

    cin >> t;

    vector<int> p, m, s;

    for (int i = 1; i <= t; i++)
    {
        int x;

        cin >> x;

        if (x == 1)
        {
            p.push_back(i);
        }
        else if (x == 2)
        {
            m.push_back(i);
        }
        else
        {
            s.push_back(i);
        }
    }

    int y = min(p.size(), min(m.size(), s.size()));

    cout << y << endl;

    for (int i = 0; i < y; i++)
    {
        cout << p[i] << " " << m[i] << " " << s[i] << endl;
    }

    return 0;
}