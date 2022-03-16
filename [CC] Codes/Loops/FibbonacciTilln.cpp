#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nl "\n"
#define ll long long

/*

Fibonacci seq:
    0 1 1 2 3 5 8 13 21 34 55 89 144 . . . .

*/

void PrintFib(int n) {

    int first = 0;
    int second = 1;

    cout << first << " " << second << " ";

    for (int i = 1; i <= n - 2; i++) { // running loop till nth term - 2 times only as fist two terms already printed

        int next = first + second;
        cout << next << " ";

        first = second;
        second = next;
    }
    cout << nl;
}


int main()
{
#ifdef PRINCE
    freopen("debug.txt", "w", stderr);
#endif
    fast_io

    int n; cin >> n;

    cout << "Fibonacci till " << n << "th term is:" << nl;
    PrintFib(n);

    return 0;
}