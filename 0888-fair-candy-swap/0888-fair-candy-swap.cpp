class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int dif = (accumulate(aliceSizes.begin(),aliceSizes.end(),0) - accumulate(bobSizes.begin(),bobSizes.end(),0))/2;
        unordered_set<int>S(aliceSizes.begin(),aliceSizes.end());

        for(int b:bobSizes){
            if(S.count(b+dif)) return {b+dif,b};
        }
        return {};
        
    }
   
};