class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // 2pointer and sliding window
        // if any character is found repeating move l one step  forward  from its first appearance and update a to its current position
        int l=0,r=0,len=0;
        int n=s.length();
        vector<int>hash(256,-1);
        while(r<n){
            if(hash[s[r]]!=-1){
                l=max(hash[s[r]]+1,l);
            }
            hash[s[r]]=r;
            len=max(len,r-l+1);
            r++;

        }
        return len;
        // TC O(N ) SC O(256)

    }
};