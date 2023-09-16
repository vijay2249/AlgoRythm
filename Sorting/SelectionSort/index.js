let initial_array = [13, 46, 24, 52, 20, 9];

console.log("Before Sorting")
console.log(initial_array);

function SelectionSort(arr) {
  const arr_length = arr.length;

  for (let i = 0; i < arr_length; i++) {
    min_value = i;
    for (let j = i + 1; j < arr_length; j++) {
      if (arr[j] < arr[min_value]) {
        min_value = j;
      }
    }
    let temp = arr[i];
    arr[i] = arr[min_value];
    arr[min_value] = temp;
  }

  console.log("After Sorting");
  console.log(arr);
}

SelectionSort(initial_array);
