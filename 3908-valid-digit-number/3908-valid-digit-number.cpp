class Solution {
public:
    bool validDigit(int n, int x) {
        string s = to_string(n);
        for(int i = 0;i<s.length();i++){
            if((s[i] - '0' == x) && i == 0){
                return false;
            }
            if(s[i] - '0' == x){
                return true;
            } 
        }
        return false;
    }
};