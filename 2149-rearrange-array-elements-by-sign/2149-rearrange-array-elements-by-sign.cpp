class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>res(nums.size(),0);
        int pos = 0;
        int neg = 1;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] < 0){
                res[neg] = nums[i];
                neg = neg +2;
            }
            else{
                res[pos] = nums[i];
                pos = pos + 2;
            }
        }
        return res;
    }
};