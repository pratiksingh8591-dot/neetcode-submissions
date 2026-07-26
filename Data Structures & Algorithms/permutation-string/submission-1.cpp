class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int sl1=s1.length();
        int sl2=s2.length();
        int k=0;
        int n=0;
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;

        if(sl1>sl2){
            return false;
        }
            else{
                k=sl1;
                n=sl2;
                for(int i=0;i<sl1;i++){
                    mp1[s1[i]]++;
                
        }
        int i=0;
        int j=0;
        while(j<n){
            mp2[s2[j]]++;
            if(j-i+1<k){
                j++;
            } else if (j - i + 1 == k) {

        if (mp1 == mp2)
            return true;

        mp2[s2[i]]--;
        if (mp2[s2[i]] == 0)
            mp2.erase(s2[i]);

        i++;
        j++;
    }
          
        }
            }
        return false;
    }
};
