class Solution {
public:
    int getLucky(string s, int k) {
        string res ="";
        for(char c:s){
            int val = c-'a'+1;
            res+=to_string(val);
        }
        while(k>0){
            int tmp =0;
            for(char x:res){
                tmp+= x- '0';
            }
            res = to_string(tmp);
            k--;
        }
        return stoi(res);
        
    }
};