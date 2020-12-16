const arr = [8, 5, 7, 3, 2];

function Selection_Sort(A) {
  //length of array
  const n = arr.length;
  // for pass
  for (let i = 0; i < n - 1; i++) {
    //for comparison and swaping
    let j = i;
    let k = i;
    for (; j < n; j++) {
      if (A[j] < A[k]) {
        k = j;
      }
    }
    //swap
    let temp = A[i];
    A[i] = A[k];
    A[k] = temp;
  }
  //displaying after sort
  for (let i = 0; i < n; i++) console.log(A[i]);
}

Selection_Sort(arr);

// complexity = O(n^2)
// stable = False
// Adaptive
