class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // find the pivot
        int pivot=-1;
        int n=nums.size();

        for(int i=n-1;i>=0;i--){
            if(nums[i]<nums[i+1]){
                pivot=i;
                break;
            }
        }

        if(pivot == -1){
            reverse(nums.begin(),nums.end()); // in place changes
            return ;
        }

        // 2nd step : next larger element

        for(int i=n-1;i>pivot;i--){
            if(nums[i]>nums[pivot]){
                swap(nums[i],nums[pivot]);
                break;
            }
        }
    }
};