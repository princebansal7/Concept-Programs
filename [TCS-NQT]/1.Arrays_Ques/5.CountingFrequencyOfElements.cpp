#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;
#define nl "\n"
#define ll long long

int arr[100];
int freq[1000];

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << nl;
}

void CountFreq1(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    CountFreq1(arr, n);

    return 0;
}