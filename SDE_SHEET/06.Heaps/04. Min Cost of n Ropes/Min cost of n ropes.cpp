class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        priority_queue<int, vector<int>, greater<int>> pq;
        int cost=0;
        for(int i=0;i<arr.size();i++){
            pq.push(arr[i]);
        }
        
        while(pq.size()>1){
            int a =pq.top();
            pq.pop();
            int b=pq.top();
            pq.pop();
            int sum=a+b;
            cost+=sum;
            pq.push(sum);
        }
        return cost;
    }
};
