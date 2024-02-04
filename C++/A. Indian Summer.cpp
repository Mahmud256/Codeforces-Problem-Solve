#include <bits/stdc++.h>
#define endl '\n'
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int main()
{
    optimize();

    int s;
    cin >> s;

    vector<pair<string, string>> v(s);

    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end());
    int count = unique(v.begin(), v.end()) - v.begin();

    cout << count << endl;

    return 0;
}
