let initial_array = [13, 46, 24, 52, 20, 9];

console.log("Before Sorting");
console.log(initial_array);

function bubbleSort(arr) {
  const arr_length = arr.length;

  for (let i = arr_length - 1; i >= 0; i--) {
    for (let j = 0; j <= i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        let temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }

  console.log("After Sorting");
  console.log(arr);
}

bubbleSort(initial_array);
