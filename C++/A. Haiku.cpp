#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int main()
{
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;

    string s1, s2, s3;
    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);

    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u')
            cnt1++;
    }
    for (int i = 0; i < s2.size(); i++)
    {
        if (s2[i] == 'a' || s2[i] == 'e' || s2[i] == 'i' || s2[i] == 'o' || s2[i] == 'u')
            cnt2++;
    }
    for (int i = 0; i < s3.size(); i++)
    {
        if (s3[i] == 'a' || s3[i] == 'e' || s3[i] == 'i' || s3[i] == 'o' || s3[i] == 'u')
            cnt3++;
    }

    if (cnt1 == 5 && cnt2 == 7 && cnt3 == 5)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
