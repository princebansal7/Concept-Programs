# DSA-OOP, TCS-NQT, Basic Conceptual programms


<details>
<summary>Sorting Algos</summary>

<blockquote>

<details>
<summary>BUBBLE SORT (Inplace and Stable sorting algorithm)</summary>

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
  <summary> SELECTION SORT (Inplace and Unstable sorting algorithm)</summary>

        1.Idea is, find out the minimum element and put at the 1st position, 2nd min at 2nd pos and
        repeat the process till end => order of elements can be changed=> Unstable sorting algo

        2.Does less memory writes compare to all other sorting algorithms
        3.But not an Optimal algo in term of memory writes, Cycle sort is more optimal in term   of memory writes
        4.TC: O(N^2) for all cases
        5.Base fot Heap Sort
        6. Non Adaptive and Unstable sorting algo
  </details>

  <details>
    <summary> INSERTION SORT (Inplace and Stable sorting algorithm)</summary>

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
   <summary>MERGE SORT</summary>

      1. Divide and Conquer and Merge
      2. Stable Algo => Mantains Order of Original equal items
      3. TC: O(N(logN)), SC: O(N)
      4. Not InPlace ALgo but Variants like Block merge sort algo take SC:O(1) and TC: O(N(logN))
      5. Well suited for External Sorting
      6. Quick Sort outforms Merge sort in case of Arrays
      Preq: You should know How Merge Two Sorted Arrays. [Codes in TCS NQT / DSA OOP folders]

</details>
</blockquote>
</details>


<details>
<summary> About XOR </summary>


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

