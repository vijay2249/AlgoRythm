## Insertion Sort

**Problem Statement:** Given an array of **N integers**, write a program to implement the Insertion sorting algorithm.

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

The algorithm steps are as follows:

1. Select an element in each iteration from the unsorted array (using a loop).
2. Place it in its corresponding position the sorted part and shift the remaining elements accordingly (using an inner loop and swapping).
3. The "inner while loop" basically shifts the elements using swapping.

```cpp
#include <bits/stdc++.h>

using namespace std;

void InsertionSort(int arr[], int n) {
  for (int i = 0; i <= n - 1; i++) {
    int j = i;
    while (j > 0 && arr[j - 1] > arr[j]) {
      int temp = arr[j - 1];
      arr[j - 1] = arr[j];
      arr[j] = temp;
      j--;
    }
  }

  cout << "After Using insertion sort: " << "\n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
}

int main() {
  int arr[] = {13, 46, 24, 52, 20, 9};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << "Before Using insertion Sort: " << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  InsertionSort(arr, n);
  return 0;
}
```

**Time complexity:** O(N<sup>2</sup>), (where N = size of the array), for the worst, and average cases.

**Reason:** If we carefully observe, we can notice that the outer loop, say i, is running from 0 to n - 1 i.e. n times, for each i, the inner loop j runs from i to 1 i.e. i times. For, i = 1, the inner loops runs 1 time, for i = 2, the inner loop runs 2 times, and so on.

So, the total steps will be approximately the sum of the first n natural numbers i.e. (n*(n+1))/2. The precise time complexity will be O(n<sup>2</sup>/2 + n/2). Previously, we have learned that we can ignore the lower values as well as the constant coefficients. So, the time complexity is O(n<sup>2</sup>). Here the value of n is N i.e. the size of the array.

**Space complexity: O(1)**
