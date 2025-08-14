Step 1 — Building the priority queue
```
for(int i = 0; i < arr.size(); i++) {
    pq.push(arr[i]);  // O(log n) each
}
```

n pushes → O(n log n)

Step 2 — While loop merging ropes
```
while (pq.size() > 1) {
    // pop two smallest elements
    pq.pop(); // O(log n)
    pq.pop(); // O(log n)

    // push merged sum back
    pq.push(sum); // O(log n)
}
```


Loop runs n - 1 times

Each iteration: 2×pop + 1×push = 3×O(log n) = O(log n)

Total → O(n log n)

Total Time Complexity

O(n log n) + O(n log n) → O(n log n)

Space Complexity

Priority queue stores at most n elements → O(n) extra space.
