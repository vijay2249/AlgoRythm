#include <bits/stdc++.h>

using namespace std;

/**
 * Merge Sort Algorithm
 * Pseudo Code
 * low, high ===> 0, n - 1
 * mid = (low + high) / 2
 * apply merge sort on low to mid
 * apply merge sort on mid + 1 to high
 * merge 2 sorted array
 * merge:
 *    temp array[]
 *    left = low
 *    right = mid + 1
 *    combine 2 arrays in sorted into temp array
 * assign temp array to main array from low to high
 */
void merge(vector<int> &arr, int low, int mid, int high) {
  vector<int> temp;
  int left = low;
  int right = mid + 1;

  while (left <= mid && right <= high) {
    if (arr[left] <= arr[right]) {
      temp.push_back(arr[left]);
      left++;
    } else {
      temp.push_back(arr[right]);
      right++;
    }
  }

  while (left <= mid) {
    temp.push_back(arr[left]);
    left++;
  }

  while (right <= high) {
    temp.push_back(arr[right]);
    right++;
  }
  
  for (int i = low; i <= high; i++) {
    arr[i] = temp[i - low];
  }
}

void mergeSort(vector<int> &arr, int low, int high) {
  if (low >= high) return;
  int mid = (low + high) / 2;
  mergeSort(arr, low, mid);
  mergeSort(arr, mid + 1, high);
  merge(arr, low, mid, high);
}

int main() {

  vector<int> arr = {9, 4, 7, 6, 3, 1, 5};
  int n = arr.size();

  cout << "Before Sorting Array: " << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  mergeSort(arr, 0, n - 1);
  cout << "After Sorting Array: " << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
