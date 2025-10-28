class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int>ans;
        for(int i = 0;i<bank.size();i++){
            string s = bank[i];
            int cnt = 0;
            for(int i = 0;i<s.length();i++){
                if(s[i] == '1'){
                    cnt++;
                }
            }
            if(cnt>0){
                ans.push_back(cnt);
            }
        }
        if(ans.size() == 0){
            return 0;
        }
        int res = 0;
        for(int i = 0;i<ans.size()-1;i++){
            res += ans[i]*ans[i+1];
        }
        return res;
    }
};