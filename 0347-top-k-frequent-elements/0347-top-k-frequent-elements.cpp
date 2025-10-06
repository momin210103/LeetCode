class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int num:nums){
            mp[num]++;
        }
        vector<pair<int,int>>vp;
        for(const auto& p:mp){
            vp.push_back({p.second,p.first});
        }
        sort(vp.rbegin(),vp.rend());
        vector<int>res;
        for(int i=0; i<k; i++){
            res.push_back(vp[i].second);
        }
        return res;
        
    }
};