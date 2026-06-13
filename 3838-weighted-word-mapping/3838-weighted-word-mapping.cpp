class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string res = "";
        for(int i = 0;i<words.size();i++){
            int sum = 0;
            string s = words[i];
            for(int j = 0;j<s.length();j++){
                int u = s[j] - 97;
                sum += weights[u];
            }
            int t = sum % 26;
            char o = 'z' - t;
            res += o;
        }
        return res;
    }
};