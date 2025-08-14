In a binary heap (whether min-heap or max-heap):

| **Operation**           | **Time Complexity** | **Reason**                                                                                                    |
| ----------------------- | ------------------- | ------------------------------------------------------------------------------------------------------------- |
| **Insertion** (`push`)  | **O(log n)**        | Add the element at the end (O(1)), then “bubble up” (percolate up) through the tree — at most height `log n`. |
| **Deletion** (`pop`)    | **O(log n)**        | Replace root with last element (O(1)), then “bubble down” (heapify down) — at most height `log n`.            |
| **Get Min/Max** (`top`) | **O(1)**            | Just return the root element without any restructuring.                                                       |


Why log n?
A binary heap is a complete binary tree, so its height is log₂(n). Both insertion and deletion might require adjusting the heap all the way from a leaf to the root or vice versa, which takes at most log n swaps.

If you want, I can also break down the make_heap complexity and compare it with inserting elements one-by-one.

# STL Heap Operations (priority_queue & make_heap)

| **Operation**                       | **Function**                                       | **Time Complexity** | **Reason**                                                                        |
| ----------------------------------- | -------------------------------------------------- | ------------------- | --------------------------------------------------------------------------------- |
| **Create heap from scratch**        | `make_heap(begin, end)`                            | **O(n)**            | Uses **Floyd's heapify**: bottom-up construction — faster than inserting n times. |
| **Insert into heap**                | `push_heap(begin, end)` / `pq.push()`              | **O(log n)**        | Adds at the end, then percolates up — max `log n` swaps.                          |
| **Remove largest/smallest element** | `pop_heap(begin, end)` + `pop_back()` / `pq.pop()` | **O(log n)**        | Swaps root with last element, reduces heap size, percolates down.                 |
| **Access largest/smallest element** | `pq.top()`                                         | **O(1)**            | Directly returns root element.                                                    |

# Priority Queue

| **Operation**        | **Function**                 | **Time Complexity** | **Reason**                                                     |
| -------------------- | ---------------------------- | ------------------- | -------------------------------------------------------------- |
| **Insert**           | `pq.push(x)`                 | **O(log n)**        | Adds at end, then **sifts up** (percolate up) in binary heap.  |
| **Remove top**       | `pq.pop()`                   | **O(log n)**        | Swaps root with last element, removes it, then **sifts down**. |
| **Get top**          | `pq.top()`                   | **O(1)**            | Direct access to first element (root).                         |
| **Build from array** | Create via range constructor | **O(n)**            | Internally calls `make_heap` (Floyd’s heapify).                |
| **Size check**       | `pq.size()`                  | **O(1)**            | Just returns stored element count.                             |
| **Empty check**      | `pq.empty()`                 | **O(1)**            | Boolean flag.                                                  |
