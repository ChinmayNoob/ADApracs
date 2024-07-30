# ADApracs
### This Repository covers all the practicals from Analysis and Design of Algorithm 

## Practical 1
Implementation and Time analysis of sorting algorithms.
Bubble Sort,Insertion Sort,Merge Sort,Quick Sort,Selection Sort


### [Bubble Sort](bubblesort.cpp)
***Time Complexity***: O(N2) for the worst and average cases and O(N) for the best case. Here, N = size of the array.

***Space Complexity***: O(1)

### [Insertion Sort](insertionsort.cpp)
***Time Complexity***: O(N2) for the worst and average cases and O(N) for the best case. Here, N = size of the array.

***Space Complexity***: O(1)

### [Selection Sort](selectionsort.cpp)
***Time Complexity***: O(N2) for the worst, average, best case. Here, N = size of the array.

***Space Complexity***: O(1)

### [Merge Sort](mergesort.cpp)
***Time Complexity***: O(nlogn) 

Reason: At each step, we divide the whole array, for that logn and we assume n steps are taken to get sorted array, so overall time complexity will be nlogn

***Space Complexity***: O(n)  

Reason: We are using a temporary array to store elements in sorted order.
### [Quick Sort](quicksort.cpp)
***Time Complexity***: O(N*logN), where N = size of the array.

Reason: At each step, we divide the whole array, for that logN and n steps are taken for the partition() function, so overall time complexity will be N*logN.

The following recurrence relation can be written for Quick sort : 

F(n) = F(k) + F(n-1-k) 

Here k is the number of elements smaller or equal to the pivot and n-1-k denotes elements greater than the pivot.

There can be 2 cases :

Worst Case – This case occurs when the pivot is the greatest or smallest element of the array. If the partition is done and the last element is the pivot, then the worst case would be either in the increasing order of the array or in the decreasing order of the array. 

Recurrence:
F(n) = F(0)+F(n-1)  or  F(n) = F(n-1) + F(0) 

Worst Case Time complexity: O(n2) 

Best Case – This case occurs when the pivot is the middle element or near to middle element of the array.
Recurrence :
F(n) = 2F(n/2)

Time Complexity for the best and average case: O(N*logN)

***Space Complexity***: O(1) + O(N) auxiliary stack space.


