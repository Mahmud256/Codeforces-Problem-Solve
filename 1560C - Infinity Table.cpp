#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int k;
		cin >> k;

		int a = 1;
		int b = 1;
		int i = 1;

		while (k >= b + a)
		{
			b += a;
			a += 2;
			i += 1;
		}

		int m = k - b + 1;
		if (m <= i)
			cout << m << ' ' << i <<endl;
		else
			cout << i << ' ' << (i - (m - i)) <<endl;
	}
}
