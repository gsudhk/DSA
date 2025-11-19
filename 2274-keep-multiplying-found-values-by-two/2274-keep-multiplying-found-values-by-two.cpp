class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_map<int,int>hm;
       for(int num:nums){
        hm[num]++;
       }
       while(hm.find(original) != hm.end()){
        original = original*2;
       } 
       return original;
    }
};