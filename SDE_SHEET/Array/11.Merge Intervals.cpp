
// Core Logic (Step-by-step):
// Sort the intervals by starting time

// This puts overlapping intervals next to each other.

// Example after sorting: [[1, 3], [2, 6], [8, 10], [15, 18]]

// Initialize a result list (called ans)

// Put the first interval into it: ans = [[1, 3]]

// Loop through the rest of the intervals:

// For each interval, check if it overlaps with the last interval in ans.

// Overlap condition:

// If the current interval’s start <= end of the last interval → they overlap

// Merge them by updating the end of the last interval to:

// max(current.end, last.end)
// No overlap:

// Just add the interval to ans as a new one

// Return the merged result









class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // Sort based on the first element of each interval
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;
        int n = intervals.size();

        for (int i = 0; i < n; i++) {
            // If ans is empty or current interval doesn't overlap with last in ans
            if (ans.empty() || intervals[i][0] > ans.back()[1]) {
                ans.push_back(intervals[i]);
            } else {
                // Overlapping: merge intervals
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            }
        }

        return ans;
    }
};

// TC -O(n)+O(nlogn)=> O(nlogn)