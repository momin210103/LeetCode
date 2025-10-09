class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string str;
        int len = max(word1.length(),word2.length());
        for(int i=0; i<len; i++){
            if(i<word1.length()){
                str +=word1[i];
            }
            if(i<word2.length()){
                str += word2[i];
            }
        }
        return str;
        
    }
};