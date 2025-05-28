class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;
        if(target>nums[r]) return r+1;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(target==nums[mid]){
                return mid;
            }
            if(nums[mid]<target){
                l = mid + 1;
               
            }
            else{
                r = mid - 1;
               
            }
        }
        return l;
    }
};