class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int len = nums.size();
        int val1 = nums[len-1]-1;
        int val2 = nums[len-2]-1;
        return val1*val2;

        
    }
};