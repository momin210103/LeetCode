class Solution {
public:
    string reverseVowels(string s) {
        int l = 0;
        int n = s.size()-1;
        int r = n;
        while(l<=r){
            if(!isvowel(s[l])){
                l++;
            } if(!isvowel(s[r])){
                r--;
            } else{
                swap(s[l],s[r]);
                l++;
                r--;
            }
        }
        return s;
        
    }
    bool isvowel(char ch){
            char c = tolower(ch);
            return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
        }
};