#include<bits/stdc++.h>
using namespace std;
bool twos(vector<int> arr,int target){
    unordered_map<int,int>hm;
    for(int i = 0;i<arr.size();i++){
        int comp = target - arr[i];
        if(hm.find(comp) != hm.end()){
            return true;
        }
        hm[arr[i]]++;
    }
    return false;
}
int main(){
    vector<int> v = {0, -1, 2, -3, 1};
    vector<int> u = {1, -2, 1, 0, 5};
    int k = -2;
    int k1 = 0;
    bool y = twos(u,k1);
    if(y){
        cout<<"yes it is a two sum";
    }
    else{
        cout << "Not a two sum";
    }
}