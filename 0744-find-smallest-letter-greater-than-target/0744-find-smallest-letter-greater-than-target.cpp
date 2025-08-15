class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l = 0;
        int h = letters.size()-1;
        char res = letters[0];
        while(l<=h){
            int mid = l + (h-l)/2;

            if(letters[mid]-'a'<=target-'a'){
                l = mid+1;
            }else{
                res = letters[mid];
                h = mid -1;

            }
        }
        return res;
    }
};