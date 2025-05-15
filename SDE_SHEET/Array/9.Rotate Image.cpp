class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();  // Get the size of the matrix (assuming it's a square matrix)

        // Step 1: Transpose the matrix
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);  // Swap elements across the diagonal
            }
        }

        // Step 2: Reverse each row of the matrix
        for (int i = 0; i < n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());  // Reverse elements in each row
        }
    }
};

