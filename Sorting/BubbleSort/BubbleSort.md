## Bubble Sort

**Problem Statement:** Given an array of **N integers**, write a program to implement the Bubble sorting algorithm.

**Example**

```
Example 1:
Input: N = 6, array[] = {13,46,24,52,20,9}
Output: 9,13,20,24,46,52
Explanation: After sorting the array is: 9, 13, 20, 24, 46, 52

Example 2:
Input: N=5, array[] = {5,4,3,2,1}
Output: 1,2,3,4,5
Explanation: After sorting the array is: 1, 2, 3, 4, 5
```

#### Solution

**Approach:**

The algorithm seteps are as follows:

1. First, we will select the range of the unsorted array. For that, we will run a loop (say i) that will signify the last index of the selected range. The loop will run backward from index n-1, and similarly, i = n-2 means tha range is from 0 to n-2, and so on.
2. Within the loop, we will run another loop(say j, runs from 0 to i-1 though the range is from 0 to i) to push the maximum element to the last index of the selected range, by repeatedly swap adjacent elements.
3. Thus, after each iteration, the last part of the array will become sorted. Like: after the first iteration, the array up to the second last index will be sorted, and so on.
4. After (n-1) iteration, the whole array will be sorted.

**Note:** *Here. after each oteration, the array becomes sorted up to the last index of the range. That is why the last index of the range decreases by 1 after each iteration. This decrement is achieved by the outer loop and the last index is represented by variable i in the following code. And the inner loop (i.e. j) helps to push the maximum element of range [0...i] to the last index(i.e. index i).*

```cpp
#include <bits/stdc++.h>

using namespace std;

/**
 * Bubble Sort Algorithm
 * Pseudo Code
 * i, j ===> 0, 0
 * i ---> n-1 to 0
 *    * This will set largest number in the loop of j
 *    * in last index after each loops completes
 *    j ---> 0 to i-1
 *      if arr[j] > arr[j+1]
 *        swap (arr[i], arr[j+1])
 *
 */
void bubble_sort(int arr[], int n) {
  for (int i = n - 1; i >= 0; i--) {
    for (int j = 0; j <= i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j + 1];
        arr[j + 1] = arr[j];
        arr[j] = temp;
      }
    }
  }

  cout << "After Using Bubble Sort: " << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int arr[] = {13, 46, 24, 52, 20, 9};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout << "Before Using Bubble Sort: " << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  bubble_sort(arr, n);
  return 0;
}
```

**Time Complexity:** O(N<sup>2</sup>), (where N = size of the array), for the worst, and average cases.

**Reason:** If we carefully observe, we can notice that the outer loop, say i, is running from n-1 to 0i.e. n times, and for each i, the inner loop j runs from 0 to i-1. For, i = n - 1, the inner loop runs n - 1 times, for i = n -2, the inner loop runs n - 2 times, and so on.

So, the total steps will be approximately the following:(n - 1) + (n - 2) + (n - 3) + .... + 3 + 2 + 1. The summation is approximately the sum of the first n natural numbers i.e. (n*(n+1))/2. The precise time complexity will be O(n<sup>2</sup>/2 + n/2). Previously, we have learned that ew can ignore the lower values as well as the constant coefficients. Sp, the time complexity is O(n<sup>2</sup>). Here the value of n is N i.e. the size of the array.

**Space Complexity: O(1)**
