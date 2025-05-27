class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int len = nums.size();
        vector<int>ans(len);
        int st = 0;
        int end = len-1;
        int ptr = len-1;

        while(st<=end){
            int ss = nums[st]*nums[st];
            int es = nums[end]*nums[end];
            if(ss>es){
                ans[ptr] = ss;
                st++;
            }
            else{
                ans[ptr] = es;
                end--;
            }
            ptr--;
        }
        return ans;
        
    }
};