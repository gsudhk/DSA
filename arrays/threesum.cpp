#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>v;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i =0;i<n;i++){
            vector<int> v1;
            if(i>0 && nums[i-1] == nums[i]){
                continue;
            }
            int x = nums[i];
            int y = i+1;
            int z = n-1;
            while(y<z){
              int sum = x + nums[y] + nums[z];
              if(sum == 0){
                v.push_back({x,nums[y],nums[z]});
                y++;
                z--;
                while(y<z && nums[y] == nums[y-1]) y++;
                while(y<z && nums[z] == nums[z+1]) z--;
                
              }
              else if(sum < 0){
                y++;
              }
              else{
                z--;
              }
            }
        }
         return v;
    }

int main(){
    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>> res = threeSum(nums);
    int n = res.size();    
    for (const auto& triplet : res) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }
}