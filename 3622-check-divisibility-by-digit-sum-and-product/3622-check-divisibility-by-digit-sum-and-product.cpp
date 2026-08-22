class Solution {
public:
    bool checkDivisibility(int n) {
        int x = n;
        int sum = 0;
        int prod = 1;
        while(x>0){
            int rem = x%10;
            sum += rem;
            prod *= rem;
            x = x/10;
        }
    int ans = sum+prod;
    if(n%ans == 0) return true;
    return false;
    }
};