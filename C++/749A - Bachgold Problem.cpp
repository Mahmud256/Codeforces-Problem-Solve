#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a = n / 2;

    cout << a << "\n";

    if (n % 2 == 0)
    {
        while (a--)
        {
            cout << 2 << " ";
        }
    }
    else
    {
        a = a - 1;
        while (a--)
        {
            cout << 2 << " ";
        }
        cout << 2 + 1 << " ";
    }

    return 0;
}
