class Solution {
    public:
        void setZeroes(vector<vector<int>>& matrix) {
            int n = matrix.size(); // Get number of rows
            if (n == 0) return;    // Edge case: empty matrix
            int m = matrix[0].size(); // Get number of columns
    
            vector<int> row(n, 0); // Row marker array
            vector<int> col(m, 0); // Column marker array
    
            // Step 1: Identify rows and columns that should be zeroed
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    if (matrix[i][j] == 0) {
                        row[i] = 1; // Mark row i
                        col[j] = 1; // Mark column j
                    }
                }
            }
    
            // Step 2: Set matrix elements to zero based on markers
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    if (row[i] || col[j]) {
                        matrix[i][j] = 0;
                    }
                }
            }
        }
    };

    