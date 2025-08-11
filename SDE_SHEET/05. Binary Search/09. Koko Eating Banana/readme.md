# Koko Eating Bananas - Binary Search Solution

## Problem Summary
Koko loves to eat bananas. There are `piles` of bananas, where `piles[i]` represents the number of bananas in the i-th pile. She can decide her eating speed `k` (bananas/hour). Each hour she chooses one pile and eats `k` bananas from it. If the pile has fewer than `k` bananas, she eats all of them.  
Koko wants to eat all the bananas within `h` hours. Find the minimum integer `k` that allows her to do so.

---

## Approach
We use **Binary Search** to find the smallest `k` (eating speed) that satisfies the condition of finishing all bananas within `h` hours.

### Steps:
1. **Search Space**:  
   - Minimum speed = `1` banana/hour  
   - Maximum speed = `max(piles)` bananas/hour  
2. **Binary Search**:
   - For a middle speed `mid`, calculate the total hours needed using the helper function `calculate_totalhour`.
   - If `totalhours <= h`, we can try a smaller speed → move `high` to `mid - 1`.
   - Else, we need a faster speed → move `low` to `mid + 1`.
3. **Helper Function** (`calculate_totalhour`):
   - Loops through each pile and calculates `ceil(pile / speed)`.
   - Sums all hours to get total hours needed.

---

## Code
```cpp
class Solution {
public:
    int calculate_totalhour(vector<int>& piles, int limit) {
        int totalhours = 0;
        for(int i = 0; i < piles.size(); i++) {
            totalhours += ceil((double)piles[i] / limit);
        }
        return totalhours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while(low <= high) {
            int mid = (low + high) / 2;
            int ans = calculate_totalhour(piles, mid);
            if(ans <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
