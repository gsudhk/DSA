class Solution {
public:
    int smallestNumber(int n) {
        string s = "";
        while(n>0){
            string t = to_string(n%2);
            n = n/2;
            s += t;
        }
        return pow(2,s.length())-1;
    }
};