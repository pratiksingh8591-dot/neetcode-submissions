class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int i=0;
        int j=0;
        int n=s.size();
        
        int maxcounter=0;
        while(j<n){
           
            mp[s[j]]++;
        
            while(mp[s[j]]>1){
                mp[s[i]]--;
                i++;
    
            }
               
           maxcounter=max(maxcounter,j-i+1);
           j++;
        }
        return maxcounter;
    }
};
