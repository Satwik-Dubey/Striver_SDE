 #include <vector>
#include <algorithm> // for std::max

class Solution {
public:
    int findMaxConsecutiveOnes(std::vector<int>& nums) {
        int cnt = 0;
        int maxcnt = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                cnt++;
                maxcnt = std::max(maxcnt, cnt); // update max only when we see 1
            } else {
                cnt = 0;
            }
        }

        return maxcnt;
    }
};
