#include<bits/stdc++.h>
using namespace std;
vector<int> v(vector<int>arr){
    vector<int>arr1;
    unordered_map<int,int>hm;
    for(int num:arr){
        hm[num]++;
    }
    for(auto m:hm){
        if(m.second > 1){
            arr1.push_back(m.first);
        }
    }
    return arr1;
}
int main(){
    vector<int> nums = {1, 2, 3, 6, 3, 6, 1};
    vector<int> result = v(nums);
    for(int num : result){
        cout << num << " " ;
    }
}
