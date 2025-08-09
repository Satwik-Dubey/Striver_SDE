class Solution {
public:
    int func(int mid, int n, int m) {
        long long ans = 1;
        for (int i = 1; i <= n; i++) {
            ans = ans * mid;
            if (ans > m) return 2;  // too big
        }
        if (ans == m) return 1;     // exact match
        return 0;                   // too small
    }

    int nthRoot(int n, int m) {
        int low = 1, high = m;
        while (low <= high) {
            int mid = (low + high) / 2;
            int midn = func(mid, n, m);

            if (midn == 1) return mid;
            else if (midn == 0) low = mid + 1;
            else high = mid - 1;
        }
        return -1;
    }
};
