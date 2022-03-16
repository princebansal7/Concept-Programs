#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nl "\n"
#define ll long long

// printing prime factorization

void primeFactor1(int n) {

    for (int i = 2; n > 1 ; i++) {
        while (n % i == 0) {
            cout << i << " ";
            n = n / i;
        }
    }
    cout << nl;
}

// printing just prime factors

void primeFactor2(int n) {

    for (int i = 2; n > 1 ; i++) {

        cout << i << " ";

        while (n % i == 0) {
            n = n / i;
        }
    }
}
int main()
{
#ifdef PRINCE
    freopen("debug.txt", "w", stderr);
#endif
    fast_io

    int n; cin >> n;
    cout << "Prime Factorization is: " << nl;
    primeFactor1(n);
    cout << "prime factors: ";
    primeFactor2(n);

    return 0;
}