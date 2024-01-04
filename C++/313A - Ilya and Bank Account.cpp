#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, first, second, result;
    cin >> n;

    first = n / 10; //first last digit remove
    second = (n / 100) * 10 + n % 10; //second last digit remove

    result = max(n, max(first,second));
    cout << result << endl;

    return 0;
}