# Optimal Approach (Using Binary Search)

We are going to use the Binary Search algorithm to optimize the approach.

The primary objective of the Binary Search algorithm is to efficiently determine the appropriate half to eliminate, thereby reducing the search space by half. It does this by determining a specific condition that ensures that the target is not present in that half.

We need to consider 2 different cases while using Binary Search in this problem. Binary Search works by reducing the search space by half. So, at first, we need to identify the halves and then eliminate them accordingly. In addition to that, we need to check if the current element i.e. `arr[mid]` is the ‘single element’.

If we can resolve these two cases, we can easily apply Binary Search in this algorithm.

### How to check if `arr[mid]` is the single element

A crucial observation to note is that if an element appears twice in a sequence, either the preceding or the subsequent element will also be the same. But only for the single element, this condition will not be satisfied. So, to check this, the condition will be the following:

If `arr[mid] != arr[mid-1]` and `arr[mid] != arr[mid+1]`: If this condition is true for `arr[mid]`, we can conclude `arr[mid]` is the single element.

The above condition will throw errors in the following 3 cases:
* If the array size is 1.
* If ‘mid’ points to 0 i.e. the first index.
* If ‘mid’ points to n-1 i.e. the last index.

**Note:** At the start of the algorithm, we address the above edge cases without requiring separate conditions during the check for `arr[mid]` inside the loop. The search space will be from index 1 to n-2 as indices 0 and n-1 have already been checked.

### Resolving Edge Cases

* **If `n == 1`:** This means the array size is 1. If the array contains only one element, we will return that element only.
* **If `arr[0] != arr[1]`:** This means the very first element of the array is the single element. So, we will return `arr[0]`.
* **If `arr[n-1] != arr[n-2]`:** This means the last element of the array is the single element. So, we will return `arr[n-1]`.

### How to Identify the Halves

By observing the array, we can clearly notice a striking distinction between the index sequences of the left and right halves of the single element.

* The index sequence of the duplicate numbers in the **left half** is always `(even, odd)`. That means one of the following conditions will be satisfied if we are in the left half:
    * If the current index is even, the element at the next odd index will be the same as the current element.
    * If the current index is odd, the element at the preceding even index will be the same as the current element.
* The index sequence of the duplicate numbers in the **right half** is always `(odd, even)`. That means one of the following conditions will be satisfied if we are in the right half:
    * If the current index is even, the element at the preceding odd index will be the same as the current element.
    * If the current index is odd, the element at the next even index will be the same as the current element.

Now, we can easily identify the left and right halves by checking the index `i` (which is `mid` in our case):

* If `(i % 2 == 0 and arr[i] == arr[i+1])` or `(i % 2 == 1 and arr[i] == arr[i-1])`, we are in the **left half**.
* If `(i % 2 == 0 and arr[i] == arr[i-1])` or `(i % 2 == 1 and arr[i] == arr[i+1])`, we are in the **right half**.

**Note:** In our case, the index `i` refers to the index `mid`.

### How to Eliminate the Halves

* If we are in the **left half** of the single element, we have to eliminate this left half (i.e. `low = mid + 1`). This is because our single element must appear somewhere on the right side.
* If we are in the **right half** of the single element, we have to eliminate this right half (i.e. `high = mid - 1`). This is because our single element must appear somewhere on the left side.

Now that we have resolved these problems, we can apply the binary search accordingly.

## Algorithm

The steps are as follows:

1.  **Handle Edge Case: `n == 1`**
    If the array size is 1, return that single element.

2.  **Handle Edge Case: First Element**
    If `arr[0] != arr[1]`, the first element is the single one. Return `arr[0]`.

3.  **Handle Edge Case: Last Element**
    If `arr[n-1] != arr[n-2]`, the last element is the single one. Return `arr[n-1]`.

4.  **Initialize Pointers**
    Place the two pointers `low` and `high` to narrow the search space.
    * `low = 1`
    * `high = n - 2`

5.  **Binary Search Loop**
    While `low <= high`:
    * Calculate `mid = low + (high - low) // 2`.
    * **Check if `arr[mid]` is the single element:**
        If `arr[mid] != arr[mid-1]` and `arr[mid] != arr[mid+1]`, then `arr[mid]` is the single element. Return `arr[mid]`.
    * **Check if we are in the left half:**
        If `(mid % 2 == 0 and arr[mid] == arr[mid+1])` or `(mid % 2 == 1 and arr[mid] == arr[mid-1])`, it means we are in the left half, and the single element is on the right.
        * Eliminate the left part: `low = mid + 1`.
    * **Otherwise, we are in the right half:**
        The single element is on the left.
        * Eliminate the right part: `high = mid - 1`.
