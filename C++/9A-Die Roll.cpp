#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, prob, maximum;

    cin >> a >> b;

    maximum = max(a, b);

    if (maximum == 1)
    {
        cout << "1/1" << endl;
    }
    else if (maximum == 2)
    {
        cout << "5/6" << endl;
    }
    else if (maximum == 3)
    {
        cout << "2/3" << endl;
    }
    else if (maximum == 4)
    {
        cout << "1/2" << endl;
    }
    else if (maximum == 5)
    {
        cout << "1/3" << endl;
    }
    else
    {
        cout << "1/6" << endl;
    }

    return 0;
}
