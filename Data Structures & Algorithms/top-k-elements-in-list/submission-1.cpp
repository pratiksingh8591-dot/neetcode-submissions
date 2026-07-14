class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<int>ans;
        int ct=k;
        if(nums.size())
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<pair<int, int>> v;
        for (auto it : mp) {
            v.push_back({it.first, it.second});
        }
          sort(v.begin(),v.end(),[](pair<int,int> a, pair<int,int> b){
            return a.second>b.second;
          });
          for(int i=0;i<k;i++){
             ans.push_back(v[i].first);
          }
        return ans;
    }
};
