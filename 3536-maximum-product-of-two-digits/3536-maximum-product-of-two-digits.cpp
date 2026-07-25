class Solution {
public:
    int maxProduct(int n) {
        string s = to_string(n);
        sort(s.begin(),s.end());
        int p = s.length();
        int y = s[p-1]-'0';
        int x = s[p-2] - '0';
        return x*y;
    }
};