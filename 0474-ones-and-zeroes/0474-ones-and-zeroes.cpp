class Solution {
public:
    int count1s(string s){
        int count = 0;
        for(int i =0;i<s.length();i++){
            if(s[i] == '1'){
                count++;
            }
    }
    return count;
    }
    int count0s(string s){
        int count = 0;
        for(int i =0;i<s.length();i++){
            if(s[i] == '0'){
                count++;
            }
    }
    return count;
    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        int n1 = strs.size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,0));
        for(int i = 0;i<strs.size();i++){
            int ones = count1s(strs[i]);
            int zero = count0s(strs[i]);
            for(int j = m;j>=zero;j--){
                for(int k = n;k>=ones;k--){
                    int take = 1 + dp[j-zero][k-ones];
                    int nottake = dp[j][k];
                    dp[j][k] = max(take,nottake);
                }
            }
        }
        return dp[m][n];
    }
};