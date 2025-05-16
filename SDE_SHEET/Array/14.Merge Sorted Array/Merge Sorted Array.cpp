class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n) {
        int idx = m + n - 1; // Pointer for the merged array (starting at end)
        int i = m - 1;       
        int j = n - 1;       

        // Merge from the end while both arrays have elements
        while (i >= 0 && j >= 0) {
            if (A[i] >= B[j]) {
                A[idx--] = A[i--];
            } else {
                A[idx--] = B[j--];
            }
        }

        // If there are remaining elements in B, copy them over
        while (j >= 0) {
            A[idx--] = B[j--];
        }
        
        // No need to handle remaining elements in A - they're already in place
    }
};

//  TC - O(M+N)