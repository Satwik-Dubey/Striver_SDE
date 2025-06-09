// User function Template for C++

//Back-end complete function Template for C++

class Solution {
  public:
    long long solve(vector<int>& bt) {
        sort(bt.begin(),bt.end());
        long long prev_sum = 0;
        long long count = 0;
        for(int i=0;i<bt.size()-1;i++){
            prev_sum += bt[i];
            count += prev_sum;
        }
        return count/bt.size();
    }
};
