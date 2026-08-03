class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      
        int m=nums1.size();
        int n=nums2.size();
        int i=m-1;
        int k=m+n-1;
        int j=n-1;
          vector<int>arr(m+n);
        while(i>=0 && j>=0){
            if(nums1[i]>nums2[j]){
              arr[k]=nums1[i];
              i--;
              k--;
            }
            else{
                arr[k]=nums2[j];
                j--;
                k--;
            }
        }
        while(j>=0){
            arr[k]=nums2[j];
            j--;
            k--; 
        }
        while(i>=0){
            arr[k]=nums1[i];
            i--;
            k--;
        }
        int in=0;
        double ans=0;
        if(arr.size()%2==0){
            in =(arr[arr.size()/2]+arr[arr.size()/2-1]);
            ans=in/2.0;
            
        }
        else{
            in=arr[arr.size()/2];
            ans=in;
            
        }
        return ans;
    }
};
