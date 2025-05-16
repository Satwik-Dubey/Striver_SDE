class Solution {
public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        vector<int> hash(n + 1, 0);
        
        // Fill the hash array to count occurrences
        for (int i = 0; i < n; i++) {
            hash[arr[i]]++;
        }
        
        // Find repeating and missing elements
        int repeating = -1;
        int missing = -1;
        
        for (int i = 1; i <= n; i++) {
            if (hash[i] == 2) {
                repeating = i;
            } else if (hash[i] == 0) {
                missing = i;
            }
        }
        
        return {repeating, missing};
    }
};
