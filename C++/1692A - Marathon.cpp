#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, c, d, i, count;
    cin >> n;

    while (n--)
    {
        cin >> a >> b >> c >> d;

        count = 0;

        if (a < b)
        {
            count++;
        }
        if (a < c)
        {
            count++;
        }
        if (a < d)
        {
            count++;
        }
        cout << count << endl;
    }

    return 0;
}