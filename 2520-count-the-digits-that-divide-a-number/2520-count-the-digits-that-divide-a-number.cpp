class Solution {
public:
    int countDigits(int num) {
        int cnt = 0;
        int num1 = num;
        while(num1>0){
            int rem = num1%10;
            if(num%rem == 0){
                cnt++;
            }
            num1 = num1/10;
        }
        return cnt;
    }
};