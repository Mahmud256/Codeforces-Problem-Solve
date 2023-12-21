#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, x;
    cin >> a;
    int i;

    for (i = 0; i < a.size(); i++)
    {
        if (a[i] == '.')
        {
            x += "0";
        }
        else if (a[i] == '-' && a[i + 1] == '.')
        {
            x += "1";
            i++;
        }
        else
        {
            x += "2";
            i++;
        }
    }

    cout << x << endl;

    return 0;
}
