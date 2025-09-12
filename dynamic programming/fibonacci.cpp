#include<bits/stdc++.h>
using namespace std;
int memo(vector<int>v,int n){
    if(n<=1) return n;
    if(v[n] != -1){
        return v[n];
    }
    return memo(v,n-1)+memo(v,n-2);
}
int tabu(int n){
    int prev = 0;
    int prev2 = 1;
    for(int i =2;i<=n;i++){
        int curr_i = prev+prev2;
        prev = prev2;
        prev2 = curr_i;
    }
    return prev2;
}
int main(){
    int n = 5;
    vector<int>v(n+1,-1);
    int s = memo(v,n);
    int t = tabu(n);
    cout << s << " " << t;
}