class Solution {
public:
    string reverseWords(string s) {
        vector<string>v;
        stringstream ss(s);
        string word;
        while(ss>>word){
            v.push_back(word);
        }
        string result;
        for(int i=v.size()-1; i>=0; i--){
            result+=v[i];
            if(i!=0){
                result+= " ";
            }
        }
        return result;

        
    }
};