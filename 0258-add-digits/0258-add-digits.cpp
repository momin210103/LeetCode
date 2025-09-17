class Solution {
public:
    int addDigits(int num) {
        int base = 10;
        int dsum = (1 + (num-1) % (base-1));
        return dsum;
    }
};