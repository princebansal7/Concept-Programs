#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nl "\n"
#define ll long long

int power(int x, int n) {
    int ans = 1;
    for (int i = 1; i <= n; i++)
        ans = ans * x;
    return ans;
}

int main()
{
#ifdef PRINCE
    freopen("debug.txt", "w", stderr);
#endif
    fast_io

    int x, n; cin >> x >> n;

    cout << power(x, n);

    return 0;
}