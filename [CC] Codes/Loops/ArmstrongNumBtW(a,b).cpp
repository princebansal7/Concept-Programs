#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nl "\n"
#define ll long long

/*
        Armstrong Number:

        153 == 1^3 + 5^3 + 3^3

*/

bool checkArmstrong(int n) {
    int sum = 0;
    int temp = n;
    while (temp > 0) {
        int ld = temp % 10;
        sum += (ld * ld * ld);
        temp = temp / 10;
    }
    if (sum == n)
        return true;
    return false;
}

void Armstrong(int a, int b) {
    for (int i = a; i <= b; i++) {
        if (checkArmstrong(i))
            cout << i << " ";
    }
    cout << nl;
}

int main()
{
#ifdef PRINCE
    freopen("debug.txt", "w", stderr);
#endif
    fast_io

    int a, b; cin >> a >> b;

    Armstrong(a, b);

    return 0;
}