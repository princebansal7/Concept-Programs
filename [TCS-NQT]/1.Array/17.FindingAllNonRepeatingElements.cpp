#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;
#define nl "\n"
#define ll long long

int arr[100];

// 1. Brute Force TC:O(N^2), SC: O(1)--------------

void findNonRepeated1(int *arr, int n)
{
    bool ok;
    for (int i = 0; i < n; i++)
    {
        ok = false;
        for (int j = 0; j < n; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                ok = true; //=> Not Unique
                break;
            }
        }
        if (ok == false) // Ok still false => never found apne jaisa element => non repeating found
            cout << arr[i] << " ";
    }
    cout << nl;
}

// to be completed

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    findNonRepeated1(arr, n);

    // findNonRepeated2(arr, n);

    // findNonRepeated3(arr, n);

    // findNonRepeated4(arr, n);

    return 0;
}