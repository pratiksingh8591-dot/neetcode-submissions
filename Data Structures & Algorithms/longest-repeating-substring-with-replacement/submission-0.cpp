class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0;
        int j=0;
        int maxfreq=0;
        int maxwindow=0;
        unordered_map<char,int>mp;
        while(j<s.size()){
            mp[s[j]]++;
            maxfreq=max(maxfreq,mp[s[j]]);
            int windowlen=j-i+1;
            if(windowlen-maxfreq>k){
                mp[s[i]]--;
                i++;

            }
            windowlen=j-i+1;
            maxwindow=max(windowlen,maxwindow);
            j++;
        }
        return maxwindow;
    }
};
