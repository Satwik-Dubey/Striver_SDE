class Solution {
public:
    int uniquePaths(int m, int n) {
        long long res = 1;          // 1️⃣  Start with result = 1 (64-bit to prevent overflow)
        int total = m + n - 2;      // 2️⃣  Total moves: (m-1) downs + (n-1) rights
        int k = min(m - 1, n - 1);  // 3️⃣  Choose the smaller of the two to minimise loops

        for (int i = 1; i <= k; ++i) {              // 4️⃣  Build the binomial coefficient
            res = res * (total - k + i) / i;        //     C(total, k) computed incrementally
        }

        return static_cast<int>(res);               // 5️⃣  Cast back to 32-bit (fits per problem)
    }
};
