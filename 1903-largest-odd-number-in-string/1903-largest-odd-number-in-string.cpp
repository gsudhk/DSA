class Solution {
public:
    string largestOddNumber(string num) {
        string t = "";
        int n = -1;
        for(int i = num.size()-1;i>=0;i--){
            if((num[i] - '0') % 2 != 0){
                n = i;
                break;
            }
        }
        if(n == -1){
            return t;
        }
        for(int i = 0;i<=n;i++){
            t += num[i];
        }
        return t;
    }
};