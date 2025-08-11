# Allocate Minimum Number of Pages - Binary Search Approach

## Problem Statement
Given an array `arr[]` where each element represents the number of pages in a book and an integer `k` (number of students), the task is to allocate books in such a way that:
- Each student gets at least one book.
- Books are allocated in contiguous order.
- The **maximum number of pages assigned to a student is minimized**.

---

## Approach

We use **Binary Search on the Answer**:
- The minimum possible answer is the **largest book** (no student can be assigned less than that).
- The maximum possible answer is the **sum of all pages** (one student gets all books).

We check for a mid value (possible max pages per student) and see if we can allocate books without exceeding `k` students.

---

## Steps

1. **Find search boundaries**:
   - `low = max(arr)` → At least this much capacity is needed.
   - `high = sum(arr)` → At most this much capacity if one student gets all books.

2. **Binary Search**:
   - Compute `mid = (low + high) / 2`.
   - Use a helper function `possible_limit()` to check how many students are required if the limit is `mid`.
   - If `students > k` → Increase limit (`low = mid + 1`).
   - Else → Try smaller limit (`high = mid - 1`).

---

## Helper Function: `possible_limit(arr, limit)`
Counts how many students are needed if each student cannot be assigned more than `limit` pages.

```cpp
int possible_limit(vector<int> &arr, int limit) {
    int student = 1;
    int pagesStudentHas = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (pagesStudentHas + arr[i] > limit) {
            student++;
            pagesStudentHas = arr[i];
        } else {
            pagesStudentHas += arr[i];
        }
    }
    return student;
}
