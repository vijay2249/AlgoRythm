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