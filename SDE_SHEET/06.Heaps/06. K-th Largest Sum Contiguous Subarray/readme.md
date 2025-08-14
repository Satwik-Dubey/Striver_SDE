/*
=============================================
Complexity Analysis: K-th Largest Sum Contiguous Subarray
=============================================

Step-by-step:

1. Generating All Subarray Sums

    for(int i = 0; i < n; i++) {
        int curr_sum = 0;
        for(int j = i; j < n; j++) {
            curr_sum += arr[j];
            pq.push(curr_sum);
        }
    }

    - Generates all O(n²) subarray sums.
    - Each pq.push() takes O(log M), where M is the heap size (up to O(n²)).
    - Total Time for this part: O(n² * log(n²)) = O(n² log n)

2. Extracting the k-th Largest

    while(k > 0) {
        ans = pq.top();
        pq.pop();
        k--;
    }

    - Each pop() is O(log M) = O(log n²) = O(log n)
    - Runs k times: O(k log n)

3. Total Time Complexity

    O(n² log n) + O(k log n)
    (If k ≤ n², the dominant term is O(n² log n))

4. Space Complexity

    - Heap stores up to O(n²) subarray sums.
    - Space Complexity: O(n²) (quadratic, not linear)

---------------------------------------------
Final Answer:
    Time Complexity (TC):   O(n² log n)
    Space Complexity (SC):  O(n²)
---------------------------------------------
*/
