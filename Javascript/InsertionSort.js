const arr = [8, 5, 7, 3, 2];

function Insertion_sort(A) {
  //length of array
  const n = arr.length;
  // for pass
  for (let i = 1; i < n; i++) {
    //for comparison and swaping
    let j = i - 1;
    let el = A[i];
    while (j > -1 && A[j] > el) {
      A[j + 1] = A[j];
      j--;
    }
    A[j + 1] = el;
  }

  //displaying after sort
  for (let i = 0; i < n; i++) console.log(A[i]);
}

Insertion_sort(arr);

// complexity = O(n^2)
// stable = true
// Adaptive
