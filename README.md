# DSA-OOP, TCS-NQT, Basic Conceptual programms


<details>
<summary>About Sorting Algos [ <a href="/Basic-Concepts/Sorting-Concepts" target="_blank">Codes</a> ]</summary>

<br>
<blockquote>

<details>
<summary>Bubble Sort (Inplace and Stable sorting algorithm)</summary>

        1.Swaps adjacent elements only if a[i]>a[i+1] => keeps the order same as
          original array => Stable sorting algo
        2.After each pass, largest element bubbled up to the top that's why called Bubble sort !!
        3.Adaptive and Stable sorting algo
</details>

<details>
  <summary>Modified Bubble Sort (Inplace and Stable sorting algorithm)</summary>
  
       - Here, we maintain a variable in each pass, if given array is sorted or became sorted
         midway, if simply stops the loop and enhances performance.
         => if Given Array sorted => TC: O(n)
            otherwise            => TC: O(n^2)
</details>

<details>
  <summary> Selection Sort (Inplace and Unstable sorting algorithm)</summary>

        1.Idea is, find out the minimum element and put at the 1st position, 2nd min at 2nd pos and
        repeat the process till end => order of elements can be changed=> Unstable sorting algo

        2.Does less memory writes compare to all other sorting algorithms
        3.But not an Optimal algo in term of memory writes, Cycle sort is more optimal in term   of memory writes
        4.TC: O(N^2) for all cases
        5.Base fot Heap Sort
        6. Non Adaptive and Unstable sorting algo
  </details>

  <details>
    <summary> Insertion Sort (Inplace and Stable sorting algorithm)</summary>

        1.Idea is, we maintain 2 parts,
            a. Sorted Part
            b. Unsorted Part

        We 'insert' the current element to sorted part at it's "correct position" and make the
        sorted part bigger in each pass.

        2.1st element is single in sorted part initially => we directly starts from the 2nd element

        3.Best and Most Efficient when Array size is Small (TimSort and IntroSort)
        4.TC: theta(N^2) for Worst Case (When given array is reverse sorted, because maximum shifting happens)
        5.TC: theta(N) for Best Case (When given array is already Sorted)
        6.In General- TC: O(N^2)
        7.Adbaptable and Stable algo
</details>
<details>
   <summary>Merge Sort</summary>

      1. Divide and Conquer and Merge
      2. Stable Algo => Mantains Order of Original equal items
      3. TC: O(N(logN)), SC: O(N)
      4. Not InPlace ALgo but Variants like Block merge sort algo take SC:O(1) and TC: O(N(logN))
      5. Well suited for External Sorting
      6. Quick Sort outforms Merge sort in case of Arrays
      Preq: You should know How Merge Two Sorted Arrays.

</details>

<details>
   <summary>Partitioning Logics</summary>
   <blockquote>

      1. Naive Partition [Stable] (slowest)
   
      2. Lomuto Partition [Unstable]
   
      3. Haore Partition [Unstable]  (fastest)
  <details>
   <summary>Naive Partition</summary>

      - Undersatnding Naive Partition [Stable]
            1. Here we have an array and index of pivot element
            2. we'll put all the smaller or equal values to the left side of pivot.
            3. then, we'll put pivot element at it's correct position
            4. then we'll put all the greater elements to right of pivot
            5. finally we'll return the index of last occurence of pivot element. (last occurence for the case
               when have muliple same elements)

            eg: I/P: arr = [3,6,12,10,7], p = 5 (pivot element index => 7 is pivot)

               =>    [3,6,7,12,10]  (not necessary that left, right part of pivot will be in sorted order)
                           or
                     [6,3,7,12,10]
                           or
                      ...........
               O/P: 2 (new pivot element i.e, 7's index)

            eg: I/P: arr = [2,7,8,3,7], p = 1
                => [2,3,7,7,8]
                O/P: 3 (index of last occurence of pivot)
      
      
  </details>

  <details>
   <summary>Lomuto Partition</summary>

   - Requires only 1 traversal => TC: O(N)
   - Requires Constant Extra Space => SC: O(1)

    WORKING:
        1. Here Also we are given array, low, high index as input
        2. Unlike Naive partition where we get pivot element's index as input,
           in Lomuto partition we always consider Last element as our Pivot element. ( will also
           see what to do if not last element is pivot)
        3. 1st we traverse array from low to high-1 (as High is pivot element, so before that)
        4. If element is smaller than pivot, increase window size of smaller elements by swapping (see in code)

        NOTE: (Handling case when pivot is not last element)

        - if custom pivot element is given, then we simply swap that pivot with last element
          and implement the lomutoPartition in similar manner.
          
  </details>

  <details>
   <summary>Hoare Partition</summary>

   - Requires only 1 traversal => TC: O(N)
   - Requires Constant Extra Space => SC: O(1)

    WORKING:
        1. Here Also we are given array, low, high index as input
        2. Unlike Naive partition where we get pivot element's index as input,
           in Hoare's partition we always consider 1st element as our Pivot element. ( will also
           see what to do if not last element is pivot)
        3. we use two pointer i (low-1), j (high+1)
        4. we move i and j such that, i stops when element is gretaer or equal to pivot element
           and j stops when element is less than the pivot element, then if i and j didn't cross eacch other
           then we simply swaps the current arr[i] and arr[j] otherwise we return j (index of last occurrence
           of pivot element)
        5. This Algo ensures that elements on the left side are smaller or equal to elements on the     right side
        6. You'll observe that elements from low to j are smaller and j+1 to high are greater => we succesfully partitioned the array

        NOTE 1:
              - Difference b/w Lomuto and Hoare partition is, in Lomuto it puts the pivot at it's correct position
                but in Hoare it doesn't put the pivot at it's correct position rather it just returns the index where
                it should be if placed at correct position.

              - So that's where lomuto partition is takes edge from Hoare's as it sorts that pivot element during partitioning
              - Then why Hoare's partition is better ? it takes less number of comparisons so on avaerage works better than
                lomuto's partition

        NOTE 2: (Handling case when pivot is not last element)

        - if custom pivot element is given, then we simply swap that pivot with last element
          and implement the hoarePartition in similar manner.

      
  </details>

   </bockquote>    
</details>

<details>
<summary>Quick Sort</summary>

    - Divide and Conquer Algo
    - Worst time complexity: O(N^2)
    - Despite O(N^2) TC, It is Considered faster due to he following:
      1. In-Place (ignoring recursion call stack)
      2. Cache Friendly
      3. Average case TC: O(N.logN)
      4. Tail recursion (recursive call is made at last)
    - Partion function is the key function (Naive (for stable), Lomuto , Hoare (for efficiency, generally used))
    - sort() in STL use Intro sort (hybrid of heap, insertion, quick sort)
    - When stability is not required Quick sort is best
    - When stability required Merge sort used

</details>

</blockquote>
<br>
</details>


<details>
<summary> About XOR [ <a href="/Basic-Concepts/Bit Manipulation" target="_blank">Codes</a> ]</summary>


#### ABOUT XOR (^) Operator:

    
    1. XOR of 2 Same = 0
    2. XOR of 2 Differents = 1
        eg: 1^0 = 1
            0^1 = 1
            1^1 = 0
            0^0 = 0
    3. If there are mulitple values getting XORed:
          - if number of 1 is odd => 1 (ans)
          - if number of 1 is even => 0 (ans)
        eg: 1^1^0 = 0
            1^1^1^0 = 1
            1^1^1 = 1
            1^1^1^1 = 0
            0^0^0^0 = 0

        Similarly:
            - XOR of same number even number of times => 0 (ans)
            - XOR of same number Odd number of times => same number (ans)
        eg: 4^4^0 = 0
            4^4^4 = 4
            4^4^4^0 = 4
            4^4^4^4 = 0
</details>



<details>
<summary>About Queues</summary>

There are many variations of Queue:
1. Dequeue (IMP)
2. Priority Queue (IMP): (every element have priority, one highest priority one gets deleted 1st always)
3. Insertion Restrcited queue (insertion happens at only one end, deletions happens on both)
4. Deletion Restricted queue  (deletion happens at only one end, insertuons happens on both)

----------Dequeue (pronounced as Deck)-------------------
Alternative names:Head-Tail queue
Double ended Queue
Insertion and Deletion is Possible on Both ends

------------------------------------------------------------
</details>

