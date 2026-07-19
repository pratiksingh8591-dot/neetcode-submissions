class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
      int n=numbers.size();
      int low=0;
      int high=n-1;
      vector<int>ans;
      int sum=0;
      cout<<"kya chedha bhonsdii";
      while(low<high){
        sum=numbers[low]+numbers[high];
        if(sum<target){
            low++;
        }
        else if(sum>target){
            high--;
        }
        else{
            ans.push_back(low+1);
            ans.push_back(high+1);
            break;
        }
      }  
      cout<<"kn";
      return ans;
    }
};
