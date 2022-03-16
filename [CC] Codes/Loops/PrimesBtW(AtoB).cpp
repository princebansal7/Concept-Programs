#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nl "\n"
#define ll long long

bool isPrime(int n) {
    int cnt = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            cnt++;
            if ((n / i) != i)
                cnt++;
        }
    }
    if (cnt == 2)
        return true;
    return false;
}

void primes(int a, int b) {

    for (int i = a; i <= b; i++)
        if (isPrime(i))
            cout << i << " ";
}

int main()
{
#ifdef PRINCE
    freopen("debug.txt", "w", stderr);
#endif
    fast_io

    int a, b; cin >> a >> b;

    primes(a, b);

    return 0;
}