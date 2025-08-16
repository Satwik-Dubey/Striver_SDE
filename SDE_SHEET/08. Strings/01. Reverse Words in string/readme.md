# LeetCode 151 — Reverse Words in a String (C++ In-place Method)

## **Approach**
We solve in-place using the **reverse trick**:
1. Clean spaces (remove extra & trim edges).
2. Reverse the **entire string**.
3. Reverse **each word individually**.

---

## **Steps**
1. **Trim leading & trailing spaces**  
   - Move `left` to first non-space.
   - Move `right` to last non-space.

2. **Remove extra spaces between words**  
   - Use a flag `spaceFound`:
     - If char is not a space → add to result, `spaceFound = false`.
     - If char is space & `spaceFound == false` → add 1 space, set `spaceFound = true`.
     - If char is space & `spaceFound == true` → skip.

3. **Reverse the whole string**  
   ```cpp
   reverse(temp.begin(), temp.end());
Reverse each word

Keep start = beginning index of current word.

When you find a space or end of string → reverse that word:

cpp
Copy
Edit
reverse(temp.begin() + start, temp.begin() + i);
start = i + 1;
Return result.

Example Dry Run
```
Input:
"  the   sky is   blue  "

After step 2:
"the sky is blue"

After step 3:
"eulb si yks eht"

After step 4:
"blue is sky the"
✅ Final Output: "blue is sky the"
```
Complexity
Time: O(n) — single pass clean, reverse, reverse words.

Space: O(1) extra.
