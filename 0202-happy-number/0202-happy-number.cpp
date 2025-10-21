class Solution {
public:
    bool isHappy(int n) {
       int base = 10;
       int sum = (1+(n-1)%(base-1));
       if(sum == 1) return true;
       return false;
    }
};