## Aggressive Cows Problem – C++ Solution

### Approach
We use **Binary Search on Answer** along with a **Greedy Placement** strategy:

1. Sort the stalls.
2. Use binary search to guess the minimum possible distance between cows (`low = 1`, `high = max_position - min_position`).
3. For each guessed distance (`mid`), check if we can place all cows using the `CanwePlace()` function.
4. If we can place them, try for a larger distance.
5. Otherwise, try for a smaller distance.
6. The last valid `mid` is the answer.

### Code
```cpp
bool CanwePlace(vector<int>& arr, int dist, int k) {
    int cow = 1;           // First cow placed at arr[0]
    int last = arr[0];     // Last occupied stall position
    
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] - last >= dist) {  // If the next stall is at least `dist` away
            cow++;                    // Place another cow
            last = arr[i];            // Update last cow position
        }
    }
    return cow >= k;  // True if we can place at least k cows
}

int aggressiveCows(vector<int> &stalls, int k) {
    sort(stalls.begin(), stalls.end()); // Stalls must be sorted
    int ans = -1;
    int low = 1; // Minimum possible distance
    int n = stalls.size();
    int high = stalls[n - 1] - stalls[0]; // Maximum possible distance

    while (low <= high) {
        int mid = (low + high) / 2; // Try a middle distance
        
        if (CanwePlace(stalls, mid, k) == true) {
            ans = mid;      // Store valid distance
            low = mid + 1;  // Try for a larger distance
        } else {
            high = mid - 1; // Try for a smaller distance
        }
    }
    return ans;
}


