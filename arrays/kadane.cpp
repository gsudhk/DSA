#include<bits/stdc++.h>
using namespace std;
int kadane(vector<int> arr){
    int maxi = INT_MIN;
    int sum = 0;
    for(int nums : arr){
        sum += nums;
        if(sum > maxi){
            maxi = sum;
        }
        if(sum < 0){
            sum = 0;
        }
    }
    return maxi;
}
int main(){
    vector<int> arr = {2, 3, -8, 7, -1, 2, 3};
    int ans = kadane(arr);
    cout << ans << " ";
}