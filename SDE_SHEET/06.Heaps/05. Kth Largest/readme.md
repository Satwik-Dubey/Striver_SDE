Time Complexity

Building the max heap (priority_queue<int>)
```
for (int i = 0; i < nums.size(); i++) pq.push(nums[i]);
```

Each push → O(log n)

n pushes → O(n log n)

Removing k largest elements
```
while (k > 0) { pq.pop(); ... }
```

Each pop → O(log n)

k pops → O(k log n)

✅ Total Time Complexity = O(n log n + k log n)
For k << n, this is basically O(n log n).

Space Complexity

The priority_queue stores all n elements → O(n) space.

Variables ans, k → O(1), but that doesn’t change the fact the heap uses O(n) extra space.

✅ Space Complexity = O(n)
