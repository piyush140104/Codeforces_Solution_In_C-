// https://leetcode.com/problems/count-and-say/
class Solution {
public:
    string countAndSay(int n) {
    string s;
    bool flag = false;
    if (n == 1) {
        s = "1";
        flag = false;
    } else {
        s = "11";
        for (int i = 2; i < n; i++) {
            string newstr;
            int count = 1;

            for (int j = 0; j < s.size(); j++) {
                if (j + 1 < s.size() && s[j] == s[j + 1]) {
                    count++;
                } else {
                    newstr += to_string(count) + s[j];
                    count = 1;
                }
            }
            s = newstr;
        }
        flag = true;
    }
    if (flag) {
        return s;
    } else {
        return s;
    }
}
};