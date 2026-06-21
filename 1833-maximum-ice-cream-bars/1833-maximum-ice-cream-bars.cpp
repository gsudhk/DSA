class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int cnt = 0;  
        for(int s : costs){
            if(s <= coins){
                cnt++;
                coins = coins - s;
            }
        }
        return cnt;
    }
};