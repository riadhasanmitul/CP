#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void init_code() {
#ifndef ONLINE_JUDGE
	freopen("inputcon.txt", "r", stdin);
	freopen("outputcon.txt", "w", stdout);
#endif
}
int main()
{
	init_code();
	int a, b;
	a = 4121; b = 4121;
	cout << !(a ^ b) << endl;
	return 0;
}
