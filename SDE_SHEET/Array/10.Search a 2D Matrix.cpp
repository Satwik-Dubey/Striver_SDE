
//  Key Idea:
// A 2D matrix of size m x n can be treated like a 1D array of size m * n.

// Each 1D index mid can be converted into 2D:

// row = mid / n

// col = mid % n

// This gives us the actual matrix element at that 1D position.

// O(logm*n)















class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int left = 0, right = m * n - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            int mid_val = matrix[mid / n][mid % n]; //this basically converts 1d index into 2d index coordinates

            if (mid_val == target)
                return true;
            else if (mid_val < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return false;
    }
};