/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'
#define ll long long

int sumOfN(int n)
{
    if (n == 1)
        return 1;

    return n + sumOfN(n - 1);
}

int main()
{
    int n;
    cin >> n;

    cout << sumOfN(n) << nl;

    return 0;
}