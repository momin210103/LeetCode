class Solution {
public:
    int compress(vector<char>& chars) {
        int write = 0, i = 0;
        while (i < chars.size()) {
        char current = chars[i];
        int j = i;
        while (j < chars.size() && chars[j] == current) j++;

        int count = j - i;
        chars[write++] = current;

        if (count > 1) {
            string cnt = to_string(count);
            for (char c : cnt) chars[write++] = c;
        }
        i = j;
    }
    return write;
    }
};