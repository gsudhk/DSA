#include<bits/stdc++.h>
using namespace std;
int profit(vector<int>arr){
    int maxi = 0;
    int mini = arr[0];
    for(int i =1;i<arr.size();i++){
        mini = min(mini,arr[i]);
        maxi = max(maxi,arr[i]-mini);
    }
    return maxi;
}
int main(){
    vector<int> arr = {7, 10, 1, 3, 6, 9, 2};
    int pro = profit(arr);
    cout << pro;
}