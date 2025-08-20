class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int lf =0;
        int win = 0;
        int zr =0;
        for(int rt =0; rt<nums.size(); rt++ ){
            if(nums[rt]!=1){
                zr++;
            }
            if(zr>k){
                if(nums[lf]==0){
                    zr--;
                }
                lf++;
            }
            win = max(rt-lf+1,win);
        }
        return win;
    }
};