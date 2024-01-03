#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, i, ans = 0;
    cin >> n;

    while (n--)
    {
        cin >> t;

        t = t / 2;

        if (t % 2 != 0)
        {
            cout << "NO" << endl;
        }

        else
        {
            cout << "YES" << endl;
            for (i = 1; i <= t; ++i)
            {
                cout << i * 2 << " ";
            }

            for (int i = 1; i < t; i++)
            {
                cout << i * 2 - 1 << " ";
            }
            cout << 3 * t - 1 << endl;
        }
    }
    return 0;
}