class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int lptr=0;
        int rptr=n-1;
        int width=0;
        int ans=0;
        int mw=0;
        while(lptr<rptr){
           width=rptr-lptr;
           int h=min(heights[lptr],heights[rptr]);
           ans=width*h;
           mw=max(ans,mw);
           if(heights[lptr]<heights[rptr]){lptr++;}
           else{rptr--;}
        }
        return mw;
    }
};
