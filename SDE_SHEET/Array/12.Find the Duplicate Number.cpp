class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Phase 1: Detect cycle using Tortoise and Hare
        int slow = nums[0];
        int fast = nums[0];

        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

        // Phase 2: Find entry point of the cycle (duplicate number)
        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }
};



// Better approach
// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         unordered_map<int, int> mpp;
//         int n = nums.size();

//         for (int i = 0; i < n; i++) {
//             mpp[nums[i]]++;
//         }

//         for (auto it : mpp) {
//             if (it.second > 1) {
//                 return it.first;  // Return the duplicate
//             }
//         }

//         return -1; 
//     }
// };


// tc -O(n)
// sc-O(N)