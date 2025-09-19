class Solution {
public:
    int hammingWeight(int n) {
        int sum = 0;
        while(n){
            int r = n % 2;
            sum+=r;
            n = n/2;
        }
        return sum;
        
    }
};