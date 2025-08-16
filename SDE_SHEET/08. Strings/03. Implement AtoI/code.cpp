class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.size();
        long ans = 0;
        int sign = 1;

        // Check for space leading
        while (i < n && s[i] == ' ') {
            i++;
        }

        // Check sign
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        // Read digits
        while (i < n && isdigit(s[i])) {
            ans = ans * 10 + (s[i] - '0');

           
            if (ans * sign <= INT_MIN) return INT_MIN;
            if (ans * sign >= INT_MAX) return INT_MAX;

            i++;
        }

        return (int)(ans * sign); 
    }
};
