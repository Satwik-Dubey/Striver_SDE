class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int ans=0;
        priority_queue<int>pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        while(k>0){
            
            ans=pq.top();
            pq.pop();
            k--;

        }
        return ans;
    }
};
