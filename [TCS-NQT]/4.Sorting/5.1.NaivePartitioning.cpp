/*
    @author: princebansal_

/*
    - Here, we'll understand various partitioning ways.
      1. Naive Partition [Stable]   (slowest)
      2. Lomuto Partition [Unstable]
      3. Haore Partition [Unstable]  (fastest)

    - Undersatnding Naive Partition [Stable]
      1. Here we have an array and index of pivot element
      2. we'll put all the smaller or equal values to the left side of pivot.
      3. then, we'll put pivot element at it's correct position
      4. then we'll put all the freater eleemnts to rught of pivot
      5. finally we'll return the index of last occurence of pivot element. (last occurence for the case
         when have muliple same elements)

      eg: I/P: arr = [3,6,12,10,7], p = 5 (pivot element index => 7 is pivot)
         =>    [3,6,7,12,10]
                     or
               [6,3,7,12,10]
                     or
                ...........
         O/P: 2 (new pivot element i.e, 7's index)

      eg: I/P: arr = [2,7,8,3,7], p = 1
          => [2,3,7,7,8]
          O/P: 3 (index of last occurence of pivot)

*/

#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

int arr[100];

//------TC:O(N), SC:theta(N)-------------------------------------------------

int naivePartition(int arr[], int n, int low, int high, int pivotIndex)
{
    // Will be doing asap

    return;
}

int main()
{
    int n, pivotIndex;
    cin >> n >> pivotIndex;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int newPivotIndex = naivePartition(arr, n, 0, n - 1, pivotIndex); // passing low, high so that would work for subarray too.

    return 0;
}