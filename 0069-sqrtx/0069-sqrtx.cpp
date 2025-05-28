class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return x;
        long long l = 1;
        long long r = x;
        while(l<=r){
            long long mid = (l + r)/2;
            if((long long )mid*mid==(long long)x){
                return mid;
            }
            if((long long)mid*mid<(long long)x){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
            
        }
        return r;
        
    }
};