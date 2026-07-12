class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mps;
         unordered_map<char,int>mpt;
        int ss=s.size();
        int tt=t.size();
        if(ss!=tt){
            return false;
        }
        for(int i=0;i<ss;i++){
            mps[s[i]]++;
        }
         for(int i=0;i<tt;i++){
            mpt[t[i]]++;
        }
         if(mps==mpt){
        return true;
         }
         return false;
    }
};
