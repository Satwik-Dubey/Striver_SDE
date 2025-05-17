class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    
    //Better approach but understandable
    int n = nums.size(); // Size of the given array
    int cnt = 0; // Number of subarrays with sum equal to k

    for (int i = 0; i < n; i++) { // Starting index i
        int sum = 0; // Initialize the sum for the current subarray starting at index i
        for (int j = i; j < n; j++) { // Ending index j
            sum += nums[j]; // Add the current element to the sum

            // If the current subarray sum is equal to k, increment the count
            if (sum == k)
                cnt++;
        }
    }
    return cnt;
    
    
    
    //Optimal approach but slight difficult to underwtand
    /*
    int n = nums.size(); // size of the given array.
    map<int,int> mpp;
    int preSum = 0, cnt = 0;

    mpp[0] = 1; // Setting 0 in the map.
    for (int i = 0; i < n; i++) {
        // add current element to prefix Sum:
        preSum += nums[i];

        // Calculate x-k:
        int remove = preSum - k;

        // Add the number of subarrays to be removed:
        cnt += mpp[remove];

        // Update the count of prefix sum
        // in the map.
        mpp[preSum] += 1;
    }
    return cnt;
    */
    }
    
};