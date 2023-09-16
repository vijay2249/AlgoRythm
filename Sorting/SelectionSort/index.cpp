#include <bits/stdc++.h>

using namespace std;

/**
 * Selection Sort Algorithm
 * Pseudo Code
 * i, j ===> 0, 0
 * i ---> 0 to n-1
 *    mini = i
 *    * find the smallest element in loop from index of i+1 to n and swap to ith index
 *    * As loop goes through all the smallest in every loop goes to beginning of the starting of next loop
 *    j ---> i+1 to n-1
 *      if arr[j] < arr[mini]
 *          mini = j
 *    swap (arr[i], arr[mini])
 * 
 */
void bubble_sort(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    int mini = i;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[mini])
      {
        mini = j;
      }
    }
    int temp = arr[mini];
    arr[mini] = arr[i];
    arr[i] = temp;
  }

  cout << "After Sorting"
       << "\n";
  for (auto i : arr)
  {
    cout << i << ", ";
  }
}

int main()
{
  int arr[] = {13, 46, 24, 52, 20, 9};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "Before Sorting"
       << "\n";

  for (auto i : arr)
  {
    cout << i << ", ";
  }
  cout << "\n";

  bubble_sort(arr, n);
}
