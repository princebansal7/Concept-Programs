/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

void fun(int n)
{
    if (n == 0)
        return;

    cout << n << " ";
    fun(n - 1);
}

// let n>=1 (input)

int main()
{
    int n;
    cin >> n;
    fun(n);
    cout << nl;
    return 0;
}