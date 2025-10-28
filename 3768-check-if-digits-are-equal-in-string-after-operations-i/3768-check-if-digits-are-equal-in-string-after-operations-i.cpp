class Solution {
public:

    bool hasSameDigits(string s) {
        int n = s.length();
        int m = n;
        while(s.length()>2){
            string t = "";
            for(int i = 0;i<s.length()-1;i++){
                int j= s[i] - '0';
                int k = s[i+1] - '0';
                int u = (j+k)%10;
                t += to_string(u);
            }
            s = t;
        }
        if(s[0] == s[1]) return true;
        return false;
    }
};