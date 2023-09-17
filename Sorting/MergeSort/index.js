let initial_array = [9, 4, 7, 6, 3, 1, 5];

console.log("Before Sorting");
console.log(initial_array);

function merge(low, mid, high) {
  const temp = [];
  let left = low,
    right = mid + 1;

  while (left <= mid && right <= high) {
    if (initial_array[left] <= initial_array[right]) {
      temp.push(initial_array[left]);
      left++;
    } else {
      temp.push(initial_array[right]);
      right++;
    }
  }

  while (left <= mid) {
    temp.push(initial_array[left]);
    left++;
  }

  while (right <= high) {
    temp.push(initial_array[right]);
    right++;
  }

  for (let i = low; i <= high; i++) {
    initial_array[i] = temp[i - low];
  }
}

function mergeSort(low, high) {
  if (low >= high) return;
  const mid = parseInt((low + high) / 2);
  mergeSort(low, mid);
  mergeSort(mid + 1, high);
  merge(low, mid, high);
}

mergeSort(0, initial_array.length - 1);

console.log("After Sorting");
console.log(initial_array);
