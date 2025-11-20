class Solution {
public:
    bool isdiv(int n){
        int m = n;
        while(n>0){
            int rem = n%10;
            if(rem == 0 || m % rem != 0 ){
                return false;
            }
            n = n/10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>res;
        for(int i = left;i<=right;i++){
            if(isdiv(i)){
                res.push_back(i);
            }
        }
        return res;
    }
};