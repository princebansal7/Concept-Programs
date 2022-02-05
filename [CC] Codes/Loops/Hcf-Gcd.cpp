#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nl "\n"
#define ll long long

int gcd(int a, int b) {

    int val = min(a, b);

    for (int hcf = val; hcf >= 1; hcf--)
        if (a % hcf == 0 && b % hcf == 0)
            return hcf;

    return 1;
}

int main()
{
#ifdef PRINCE
    freopen("debug.txt", "w", stderr);
#endif
    fast_io

    int a, b; cin >> a >> b;

    cout << gcd(a, b);

    return 0;
}