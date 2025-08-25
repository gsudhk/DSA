#include <bits/stdc++.h>
using namespace std;
vector<int> res(vector<int>arr){
    int prefix = 1;
    vector<int>res1(arr.size(),1);
    for(int i =0;i<arr.size();i++){
        res1[i] = prefix;
        prefix *= arr[i]; 
    }
    int postfix = 1;
    for(int i =arr.size()-1;i>=0;i--){
        res1[i] *= postfix;
        postfix *= arr[i];
    }
    return res1;
}
int main() {
    vector<int> arr = {10, 3, 5, 6, 2};
    vector<int>ans = res(arr);
    for(int num : ans){
        cout << num<<" ";
    } 
    return 0;
}