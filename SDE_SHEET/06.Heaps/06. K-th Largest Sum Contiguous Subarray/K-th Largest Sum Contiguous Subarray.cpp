
class Solution {
  public:
    int kthLargest(vector<int> &arr, int k) {
        int ans=0;
        priority_queue<int>pq;
        int n=arr.size();
        vector<int>subarray;
        for(int i=0;i<n;i++){
            int curr_sum=0;
            for(int j=i;j<n;j++){
                curr_sum+=arr[j];
                pq.push(curr_sum);
            }
        }
        
        // kth largest
        
        while(k>0){
            ans=pq.top();
            pq.pop();
            k--;
            
        }
        
        return ans;
        
    }
};
