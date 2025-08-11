class Solution {
  public:
    
    bool CanwePlace(vector<int>& arr,int dist,int k){
        int cow=1;//first ow is placed in arr[0]
        int last=arr[0];
        for(int i=1;i<arr.size();i++){
            if(arr[i]-last>=dist){
                cow++;
                last=arr[i];
            }
        }
        return cow>=k;
    }
  
  
    int aggressiveCows(vector<int> &stalls, int k) {
        sort(stalls.begin(),stalls.end());
        int ans=-1;
        int low=1; // this is the min length
        int n=stalls.size();
        int high=stalls[n-1]-stalls[0];
        while(low<=high){
            int mid=(low+high)/2;
            if(CanwePlace(stalls,mid,k)== true){// it means that there is a chance that all cow can fix so move right to find max of min distances
                ans=mid;
                low=mid+1;
            } else{
                high=mid-1;
            }
        }
        return ans;
    }
};
