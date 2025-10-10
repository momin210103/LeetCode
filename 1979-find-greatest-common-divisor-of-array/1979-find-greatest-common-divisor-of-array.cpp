class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums[0];
        int m = nums[nums.size()-1];
        int gc = gcd(n,m);
        return gc;
        
    }
};