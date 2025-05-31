class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int>ans = nums;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int largest = nums[n-1];
        int sndlargest = nums[n-2];
        if(largest>=2*sndlargest){
            for(int i =0; i<n; i++){
                if(ans[i]==largest){
                    return i;
                }
            }
        }
        return -1;
        
        
    }
};