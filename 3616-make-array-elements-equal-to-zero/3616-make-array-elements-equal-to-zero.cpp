class Solution {
public:
    int sumof(vector<int>nums,int start,int end){
        int sum  = 0;
        for(int i = start;i<end;i++){
            sum += nums[i];
        }
        return sum;
    }
    int countValidSelections(vector<int>& nums) {
        int cnt = 0;
        int n = nums.size();
        for(int i = 0;i<nums.size();i++){
            int sum_right = 0,sum_left = 0;
            if(nums[i] == 0){
                sum_left = sumof(nums,0,i);
                sum_right = sumof(nums,i+1,n);
                if(sum_left == sum_right){
                    cnt += 2;
                }
                else if(abs(sum_right-sum_left) == 1){
                    cnt++;
                }
            }
        }
           return cnt;
    }
};