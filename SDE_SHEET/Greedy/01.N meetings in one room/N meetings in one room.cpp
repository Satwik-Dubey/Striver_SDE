class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(vector<int>& start, vector<int>& end) {
        // Your code here
        //  we have to prefer smaller meetings  
        vector<pair<int,int>>meetings;
        for(int i=0;i<start.size();i++){
            meetings.push_back({end[i],start[i]});
            
        }
        // have to sort according to end time thats why take end first in pair
        sort(meetings.begin(),meetings.end());
        
        int cnt=1;
        int lastendTime=meetings[0].first;
        
        for(int i=1;i<meetings.size();i++){
            if(meetings[i].second>lastendTime){
                cnt++;
                lastendTime=meetings[i].first;
            }
        }
        return cnt;
    }
};
