## Approach

- What we have to do is first store values in map and then we have to traverse the string input and check if the presen character is smaller than the next then we have to subtract the current element from the total and if the current character is bigger or equal then we will add to the total.

# Roman to Integer — Time & Space Complexity

## **Approach**
- Store the value of each Roman numeral symbol in a map/unordered_map.
- Loop through the string:
  - If the current value is less than the next value, subtract it from the total (handles cases like IV, IX).
  - Otherwise, add it to the total.
- Return the total at the end.

---

## **Time Complexity (TC)**
- Let `n` = length of the string `s`.
- Loop runs `n` times.
- Map/Unordered_map lookup:
  - **unordered_map** → O(1) average case.
  - **map** → O(log k), where `k` is the number of keys (here, `k = 7`, so it’s constant).
- Other operations (comparison, addition/subtraction) are O(1).
- **Final TC:**  
  - Using `unordered_map`: **O(n)**  
  - Using `map`: **O(n)** (since log 7 is constant).

---

## **Space Complexity (SC)**
- Map stores only 7 entries → **O(1)**.
- Variables (`total`, `i`) → **O(1)**.
- No extra data structures proportional to input size.
- **Final SC:** **O(1)**.
