#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, q, i, j;
    cin >> n;

    vector<long long int> arr(n);

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    cin >> q;

    vector<long long int> m(q);

    for (j = 0; j < q; j++)
    {
        cin >> m[j];
    }

    for (int j = 0; j < q; j++)
    {
        long long int count = upper_bound(arr.begin(), arr.end(), m[j]) - arr.begin();
        cout << count << endl;
    }

    return 0;
}
