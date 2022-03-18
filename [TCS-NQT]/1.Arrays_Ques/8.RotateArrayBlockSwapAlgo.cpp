#include <iostream>
#include <utility>
using namespace std;
#define nl "\n"
#define ll long long

int arr[100];

/*----------Way-1--------------------------------------

void rotateByOne(int arr[], int n)
{
    // Right Rotation

    int temp = arr[n - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}

void rotateArray3(int arr[], int n, int k)
{
    for (int i = 1; i <= k; i++)
        rotateByOne(arr, n);
}
----------------------------------------------------*/

/*-----------WAY-2-----------------------------------

void reverse(int arr[], int low, int high)
{
    while (low < high)
        swap(arr[low++], arr[high--]);
}
void rotateArray1(int arr[], int n, int k)
{
    int size = n;
    int left = 0;
    int right = n - 1;

    if (k > size)
        k = k % size;

    // FOR RIGHT ROTATION:-

    reverse(arr, size - k, right);
    reverse(arr, left, size - k - 1);
    reverse(arr, left, right);

    // FOR LEFT ROTATION:-

    // reverse(arr, left, k - 1);
    // reverse(arr, k, right);
    // reverse(arr, left, right);
}
-----------------------------------------------------*/

/*-----------WAY-3------------------------------------------

void rotateArray2(int arr[], int n, int k)
{

    int temp[n];

    // Rotating right by k places (clockwise) => Right Rotation

    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = arr[i];
    }

    for (int i = 0; i < n; i++)
        cout << temp[i] << " ";
    cout << nl;
}
------------------------------------------------------------------*/

/*---------WAY-4 (Block Swap Algorithm)----------------------------


void rotateArray4(int arr[], int n, int k){


}


--------------------------------------------------------------------*/

int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // rotateArray3(arr, n, k);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << nl;
    return 0;
}