#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nl "\n"
#define ll long long

int fact(int n) {
    if (n == 0)
        return 1;
    int ans = 1;
    for (int i = 1; i <= n; i++)
        ans = ans * i;
    return ans;
}

bool StrongNum(int n) {

    int sum = 0;
    int temp = n;
    while (temp > 0) {
        int ld = temp % 10;
        sum += fact(ld);
        temp = temp / 10;
    }
    if (sum == n)
        return true;
    return false;
}


int main()
{
#ifdef PRINCE
    freopen("debug.txt", "w", stderr);
#endif
    fast_io

    int n; cin >> n;

    if (StrongNum(n))
        cout << "YES" << nl;
    else
        cout << "NO" << nl;

    return 0;
}