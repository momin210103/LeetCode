class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int>ans;
        int p = num.size()-1;
        int c =0;
        while(p>=0 || k>0){
            int val = 0;
            if(p>=0){
                val = num[p];
            }
            int d = k%10;
            int sum = val + c + d;
            int digit = sum%10;
            c = sum/10;

            ans.push_back(digit);
            p--;
            k=k/10;

        }
        if(c>0){
            ans.push_back(c);
        }
        reverse(ans.begin(),ans.end());
       return ans; 
    }
};