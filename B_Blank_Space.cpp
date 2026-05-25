#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t, n;

    cin >> t;

    while (t--)
    {

        int c = 0, a = 0;

        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            if (arr[i] == 0)
            {
                c++;
                a = max(c, a);
            }
            else
            {
                c = 0;
            }
        }

        cout << a << endl;
    }

    return 0;
}