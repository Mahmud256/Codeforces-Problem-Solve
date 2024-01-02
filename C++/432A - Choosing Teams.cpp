#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, i, count = 0, ans;
    cin >> n >> k;

    int a[n];

    for (i = 0; i < n; i++)
    {
        cin >> a[i];

        if (5 - a[i] >= k)
        {
            count++;
        }

        ans = count / 3;
    }

    cout << ans << endl;

    return 0;
}