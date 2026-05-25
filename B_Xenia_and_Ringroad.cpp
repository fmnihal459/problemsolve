#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m;

    cin >> n;

    cin >> m;

    vector<int> v(m);

    for (int i = 0; i < m; i++)
    {

        cin >> v[i];
    }

    long long time = 0;

    int p = 1;

    for (int j = 0; j < m; j++)
    {

        if (v[j] >= p)
        {
            time += v[j] - p;
        }
        else
        {
            time += (n - p) + v[j];
        }

        p = v[j];
    }

    cout << time;

    return 0;
}