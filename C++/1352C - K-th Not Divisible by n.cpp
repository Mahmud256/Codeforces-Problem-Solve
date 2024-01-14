#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int n, k, ans = 0;
        cin >> n >> k;

        ans = k + (k - 1) / (n - 1);

        cout << ans << endl;
    }

    return 0;
}