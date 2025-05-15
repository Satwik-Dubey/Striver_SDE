class Solution {
    public:
        vector<int> majorityElement(vector<int>& nums) {
            int n = nums.size();
            vector<int> result;
            unordered_map<int, int> mpp;
            
            
            for (int i = 0; i < n; ++i) {
                mpp[nums[i]]++;
            }
            
            // Find elements with count > n/3
            for (auto& pair : mpp) {
                if (pair.second > n / 3) {
                    result.push_back(pair.first);
                }
            }
            
            return result;
        }
    };
    
    // TC-O(N)
    // SC-O(N)