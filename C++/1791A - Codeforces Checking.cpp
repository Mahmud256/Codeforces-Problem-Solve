#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    cin >> n;

    char c;

    for (i = 0; i < n; i++)
    {
        cin >> c;

        if (c == 'c' || c == 'o' || c == 'd' || c == 'e' || c == 'f' || c == 'r' || c == 's')
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
