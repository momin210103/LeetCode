class Solution {
public:
    string reverseVowels(string s) {
        string reverseVowels(string s) {
        int n=s.size()-1;
        int l=0,r=n;
        while (l<=r){
            if (!isvow(s[l])){
                l++;
            }
            if (!isvow(s[r])){
                r--;
            }
            else if (isvow(s[l]) && isvow(s[r])){
                swap(s[l],s[r]);
                l++;
                r--;
            }
        }
        return s;
    }
    bool isvow(char ch){
        char c= tolower(ch);
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }
};