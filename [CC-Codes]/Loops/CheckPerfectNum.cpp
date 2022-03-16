#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nl "\n"
#define ll long long

bool perfectNum(int n) {

    int sum = 1; // because 1 is always a divisor

    for (int i = 2; i * i < n; i++) {
        if (n % i == 0) {

            sum += i;
            if ((n / i) != i) {

                sum += (n / i);
            }
        }
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

    if (perfectNum(n))
        cout << "YES" << nl;
    else
        cout << "NO" << nl;

    return 0;
}