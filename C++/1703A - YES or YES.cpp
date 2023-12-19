#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;

    while (n--)
    {
        cin >> s;

        for (char &ab : s)
        {
            ab = tolower(ab);
        }

        if (s == "yes")
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
