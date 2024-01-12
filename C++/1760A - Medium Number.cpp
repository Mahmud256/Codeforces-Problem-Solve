#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b, c, maximum, minimum;

    cin >> n;

    while (n--)
    {
        cin >> a >> b >> c;

        maximum = max(a, max(b, c));
        minimum = min(a, min(b, c));

        if (a != maximum && a != minimum)
        {
            cout << a << endl;
        }
        else if (b != maximum && b != minimum)
        {
            cout << b << endl;
        }
        else if (c != maximum && c != minimum)
        {
            cout << c << endl;
        }
    }

    return 0;
}
