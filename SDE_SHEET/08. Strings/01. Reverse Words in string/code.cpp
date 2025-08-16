class Solution {
public:
    string reverseWords(string s) {
        // Step 1: Remove leading/trailing spaces
        int left = 0, right = s.size() - 1;
        while (left <= right && s[left] == ' ') left++;
        while (right >= left && s[right] == ' ') right--;
        
        // Step 2: Remove multiple spaces
        string temp = "";
        bool spaceFound = false;
        for (int i = left; i <= right; i++) {
            if (s[i] != ' ') {
                temp += s[i];
                spaceFound = false;
            } else if (!spaceFound) {
                temp += ' ';
                spaceFound = true;
            }
        }
        
        // Step 3: Reverse the entire string
        reverse(temp.begin(), temp.end());
        
        // Step 4: Reverse each word
        int start = 0;
        for (int i = 0; i <= temp.size(); i++) {
            if (i == temp.size() || temp[i] == ' ') {
                reverse(temp.begin() + start, temp.begin() + i);
                start = i + 1;
            }
        }
        
        return temp;
    }
};
