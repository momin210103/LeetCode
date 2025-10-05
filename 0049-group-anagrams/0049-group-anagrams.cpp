class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(const auto& s :strs){
            string str = s;
            sort(str.begin(),str.end());
            mp[str].push_back(s);
        }
        vector<vector<string>>v;
        for(auto& pair:mp){
            v.push_back(pair.second);
        }
        return v;
    }
};