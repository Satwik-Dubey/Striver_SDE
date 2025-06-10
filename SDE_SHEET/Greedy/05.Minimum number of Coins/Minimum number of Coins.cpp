class Solution {
  public:
    vector<int> minPartition(int N) {
        vector<int> dino = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
        vector<int> ans;
        for (int i = dino.size() - 1; i >= 0; i--) {
            while (N >= dino[i]) {
                N -= dino[i];
                ans.push_back(dino[i]);
            }
        }
        return ans;
    }
};
