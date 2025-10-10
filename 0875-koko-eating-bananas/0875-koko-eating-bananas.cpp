class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int mxp = *max_element(piles.begin(),piles.end());
        for(int i=1; i<=mxp; i++){
            int hrs = 0;
            for(int pile :piles){
                hrs += (pile+i-1)/i;
                if(hrs>h) break;
            }
            if(hrs<=h) return i;
        }
        return mxp;
        
    }
};