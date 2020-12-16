const arr = [8, 5, 7, 3, 2];

function Bubble_sort(A) {
  //length of array
  const n = arr.length;
  // for pass
  for (let i = 0; i < n - 1; i++) {
    //for comparison and swaping
    for (let j = 0; j < n - 1 - i; j++) {
      if (A[j] > A[j + 1]) {
        //swap
        let temp = A[j];
        A[j] = A[j + 1];
        A[j + 1] = temp;
      }
    }
  }

  //displaying after sort
  for (let i = 0; i < n; i++) console.log(A[i]);
}

Bubble_sort(arr);

// complexity = O(n^2)
// stable = true
// byDefault not adaptive but can be convert into adaptive using flag
