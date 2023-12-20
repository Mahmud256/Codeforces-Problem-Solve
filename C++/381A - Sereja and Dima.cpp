#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, s = 0, d = 0;
    cin >> n;
    int a[n];
    int l = 0, r = n - 1, t = n, z = 0;

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    while (t != 0)
    {
        if (z % 2 == 0)
        {
            if (a[l] >= a[r])
            {
                s += a[l];
                l++;
            }
            else
            {
                s += a[r];
                r--;
            }
        }
        else
        {
            if (a[l] >= a[r])
            {
                d += a[l];
                l++;
            }
            else
            {
                d += a[r];
                r--;
            }
        }
        t--;
        z++;
    }

    cout << s << " " << d << endl;

    return 0;
}