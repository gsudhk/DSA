class Solution {
public:
    string reversePrefix(string s, int k) {
        string res = "";
        for(int i = k-1 ; i>=0;i--){
            res += s[i];
        }
        for(int i = k; i<s.length();i++){
            res += s[i];
        }
        return res;
    }
};