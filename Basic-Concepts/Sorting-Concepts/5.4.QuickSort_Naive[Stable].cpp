/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

int arr[100];

/*-------- Quick Sort --------------------------------------------------
    - Divide and Conqure Algo
    - Worst time complexity: O(N^2)
    - Despite O(N^2) TC, It is Considered faster due to he following:
      1. In-Place (ignoring recursion call stack)
      2. Cache Friendly
      3. Average case TC: O(N.logN)
      4. Tail recursion (recursive call is made at last)
    - Partion function is the key function (Naive (for stable), Lomuto , Hoare (for efficiency, generally used))
    - sort() in STL use Intro sort (hybrid of heap, insertion, quick sort)
    - When stability is not required Quick sort is best
    - When stability required merge sort used
*/

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << nl;
}

// partition function

int naivePartition(int arr[], int low, int high)
{
    int tempArr[high - low + 1], index = 0;

    int pivotIndex = high - 1; // can choose any pivot

    // filling left part (smaller elements than pivot)
    for (int i = low; i <= high; i++) {
        if (arr[i] < arr[pivotIndex]) {
            tempArr[index] = arr[i];
            index++;
        }
    }

    // filling elements those are equal to pivot (for stability, this different loop for equal elements)
    for (int i = low; i <= high; i++) {
        if (arr[i] == arr[pivotIndex]) {
            tempArr[index] = arr[i];
            index++;
        }
    }

    // gettting new pivot index (i.e, pivot's last occurence index if any)
    int newPivotIndex = low + index - 1;

    // fiiling right part (greater elements than pivot)
    for (int i = low; i <= high; i++) {
        if (arr[i] > arr[pivotIndex]) {
            tempArr[index] = arr[i];
            index++;
        }
    }

    // copying this new partitioned array to original array
    for (int i = low; i <= high; i++) {
        arr[i] = tempArr[i - low];
    }
    return newPivotIndex;
}

//----Quick Sort (using Lomuto partition)-------------------

void quickSort(int arr[], int low, int high)
{

    if (low < high) {
        int pivotIndex = naivePartition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    quickSort(arr, 0, n - 1);

    printArray(arr, n);

    return 0;
}