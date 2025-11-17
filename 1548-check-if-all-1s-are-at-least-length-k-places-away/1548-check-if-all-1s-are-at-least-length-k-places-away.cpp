class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        for(int i = 0;i<nums.size();i++){
            if(nums[i] == 1){
                int j = i+1;
                if(j < nums.size()){
                for(int k1 = j;k1<j+k;k1++){
                    if(nums[k1] == 1){
                        return false;
                    }
                }
                }
            }
        }
        return true;
    }
};