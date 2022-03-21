#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

//--------WAY-1---------------------------

void decimalToBinary(int n)
{
    bool bits[32] = {0};

    int index = 0;
    while (n)
    {
        bits[index] = n % 2;
        index++;
        n /= 2;
    }
    for (int i = index - 1; i >= 0; i--)
        cout << bits[i];
    cout << nl;
}

int main()
{
    int n;
    cin >> n;

    decimalToBinary(n);
    return 0;
}