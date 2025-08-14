class Solution {
  public:
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        // your code here
        vector<int>result=a;
        result.insert(result.end(),b.begin(),b.end());
        
        make_heap(result.begin(), result.end()); // from stl
        
        return result;
    }
};
