class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1;
        long N = n;
        if(N<0){
            x = 1/x;
            N = -N;
        }

        double tmp = myPow(x,N/2);
        if(n%2==0) return tmp * tmp;
        return x*tmp*tmp;
        
    }
};