class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       vector<int>ans =  merge(nums1,nums2);
       int len = ans.size();
       if (len % 2 == 0) {
            double val = (ans[len / 2] + ans[(len / 2) - 1]) / 2.0;
            return val;
        } else {
            return ans[len / 2];
        }
        
    }
    vector<int> merge(vector<int>ar1,vector<int>ar2){
        vector<int>ans(ar1.size()+ar2.size());
        int p1 = 0;
        int p2 = 0;
        int p3 = 0;
        while(p1<ar1.size() || p2<ar2.size()){
            int val1 = p1<ar1.size() ? ar1[p1]:INT_MAX;
            int val2 = p2<ar2.size() ? ar2[p2]:INT_MAX;

            if(val1<val2){
                ans[p3] = val1;
                p1++;
            }
            else{
                ans[p3] = val2;
                p2++;
            }
            p3++;

        }
        return ans;
    }
};