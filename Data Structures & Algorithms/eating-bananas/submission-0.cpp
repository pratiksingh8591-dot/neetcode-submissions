class Solution {
public:
    long long totalcounter(vector<int>& piles, int mid){
        long long totalsum=0;
        for(int i=0;i<piles.size();i++){
            totalsum+=ceil(double(piles[i])/double(mid));
        }
        return totalsum;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi=0;
        for(int i=0;i<piles.size();i++){
            maxi=max(piles[i],maxi);
        }
        int low=1;
        int ans=0;
        int high=maxi;
        while(low<=high){
            int mid=(low+high)/2;
            long long hourly=totalcounter(piles,mid);
            if(hourly<=h){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }

        }
        return ans;
    }
};
