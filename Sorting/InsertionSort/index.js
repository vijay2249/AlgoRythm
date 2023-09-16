let initial_array = [13, 46, 24, 52, 20, 9];

console.log("Before Sorting");
console.log(initial_array);

function InsertionSort(arr) {
  const arr_length = arr.length;

  for (let i = 0; i < arr_length; i++) {
    j = i;
    while (j > 0 && arr[j - 1] > arr[j]) {
      [arr[j - 1], arr[j]] = [arr[j], arr[j - 1]];
      j--;
    }
  }

  console.log("After Sorting");
  console.log(arr);
}

InsertionSort(initial_array);
