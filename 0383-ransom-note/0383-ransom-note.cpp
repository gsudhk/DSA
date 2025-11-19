class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>hm;
        for(char ch: magazine){
            hm[ch]++;
        }
        for(char ch1 : ransomNote){
            if(hm[ch1] >0){
                hm[ch1]--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};