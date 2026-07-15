class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       vector<int>res;
            vector<int>leftsum;
        vector<int>rightsum(nums.size());
        int sum=1;
        int sm=1;
        int r=0;

        for(int i=0;i<nums.size();i++){
             
             sum=sum*nums[i];
             leftsum.push_back(sum);
          
        }
        for(int j=nums.size()-1;j>=0;j--){
            
             sm*=nums[j];
              rightsum[j]=sm;
            
        }
        for(int r=0;r<nums.size();r++){
            if(r==0){
                res.push_back(rightsum[r+1]);
            }
           else if(r==nums.size()-1){
                res.push_back(leftsum[r-1]);
            }
            else{
            res.push_back(leftsum[r-1]*rightsum[r+1]);
            }
           
        }
      
      return res;
    }
};
