
class Solution {
public:
    double calculate_totalhour(vector<int>& piles, int limit) {
        double totalhours = 0;
        for(int i = 0; i < piles.size(); i++) {
            totalhours += ceil((double)piles[i] / limit);
        }
        return totalhours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while(low <= high) {
            int mid = (low + high) / 2;
            double ans = calculate_totalhour(piles, mid);
            if(ans <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;// we are doing bcz if we move more left than the total duration will increase therefore t balance it out wehae to move a bit right
            }
        }
        return low;
    }
};
