class Solution {
    
public:

    int missingNumber(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        int len = nums.size();
        int val1 = 0;
        int val = accumulate(nums.begin(),nums.end(),0);
        for(int i=0; i<=len; i++){
            val1 += i;
        }
        return val1-val;
        
    }
};