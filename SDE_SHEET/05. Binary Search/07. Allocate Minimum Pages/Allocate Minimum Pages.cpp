class Solution {
  public:

    int possible_limit(vector<int> &arr, int limit) {
        int students = 1; // start with first student
        int pagesStudentHas = 0;
        
        for (int i = 0; i < arr.size(); i++) {
            if (pagesStudentHas + arr[i] <= limit) {
                pagesStudentHas += arr[i]; // add pages to current student
            } else {
                students++; // need a new student
                pagesStudentHas = arr[i];
            }
        }
        return students;
    }
    
    int findPages(vector<int> &arr, int k) {
        int n = arr.size();
        if (k > n) return -1; // impossible case
        
        int low = *max_element(arr.begin(), arr.end());
        int high = accumulate(arr.begin(), arr.end(), 0);
        
        while (low <= high) {
            int mid = (low + high) / 2;
            if (possible_limit(arr, mid) > k) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return low;
    }
};
