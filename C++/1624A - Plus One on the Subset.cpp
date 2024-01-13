#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, prov;
    cin >> n;

    while (n--)
    {
        int t;
        cin >> t;
        vector<int> v(t);

        for (int i = 0; i < t; i++)
        {
            cin >> v[i];
        }

        int maxElement = INT_MIN;
        int minElement = INT_MAX;

        for (int i = 0; i < t; i++)
        {
            if (v[i] > maxElement)
            {
                maxElement = v[i];
            }

            if (v[i] < minElement)
            {
                minElement = v[i];
            }
        }

        prov = maxElement - minElement;
        cout << prov << endl;
    }

    return 0;
}
