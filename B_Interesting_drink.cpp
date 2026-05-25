#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, x;

    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {

        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int t;

    cin >> x;

    for (int j = 0; j < x; j++)
    {

        cin >> t;

        int c = upper_bound(v.begin(), v.end(), t) - v.begin();

        cout << c << endl;
    }

    return 0;
}