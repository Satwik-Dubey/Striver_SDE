
---

## Approach 1: Max Heap (O(n log k))
**Best when** `k << n`

### Logic
1. Create a **Max Heap** (in C++: `priority_queue<int>`).
2. Traverse the array:
   - Push the element into the heap.
   - If heap size > k → pop the largest element (root of Max Heap).
3. After processing all elements, the **heap root** will be the `k`-th smallest element.

### Why This Works
- The heap **always stores the k smallest elements** seen so far.
- The **largest among them (root)** is the `k`-th smallest overall.

---

### Example Walkthrough (k = 3, arr = [7, 10, 4, 3, 20, 15]):

| Step | Element | Heap Content (Max Heap) | Action |
|------|---------|------------------------|--------|
| 1    | 7       | [7]                    | push   |
| 2    | 10      | [10, 7]                | push   |
| 3    | 4       | [10, 7, 4]             | push   |
| 4    | 3       | [10, 7, 4, 3] → pop 10 | pop    |
| 5    | 20      | [20, 7, 4, 3] → pop 20 | pop    |
| 6    | 15      | [15, 7, 4, 3] → pop 15 | pop    |

Final Heap: [7, 3, 4] → root = **7** (3rd smallest)

---

### Code (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

int kthSmallest(vector<int>& arr, int k) {
    priority_queue<int> maxHeap;

    for (int num : arr) {
        maxHeap.push(num);
        if (maxHeap.size() > k) {
            maxHeap.pop();
        }
    }
    return maxHeap.top();
}

int main() {
    vector<int> arr = {7, 10, 4, 3, 20, 15};
    int k = 3;
    cout << kthSmallest(arr, k) << endl; // Output: 7
    return 0;
}
