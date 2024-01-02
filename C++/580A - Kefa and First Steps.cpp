#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0, i, m = 1;
    cin >> n;
    int a[n];

    for (i = 0; i < n; i++)
    {
        cin >> a[i];

        if (a[i] >= a[i - 1])
        {
            count++;
            m = max(m, count);
        }
        else
        {
            count = 1;
        }
    }

    cout << m << endl;

    return 0;
}