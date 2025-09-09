#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& prices, int k) {
        vector<int> res;
        sort(prices.begin(), prices.end());
        int n = prices.size();

        int buy = 0;
        int free = n - 1;
        int mini = 0;

        // Minimum cost
        while (buy <= free) {
            mini += prices[buy];
            buy++;
            free -= k;
        }

        // Maximum cost
        buy = n - 1;
        free = 0;
        int maxi = 0;
        while (free <= buy) {
            maxi += prices[buy];
            buy--;
            free += k;
        }

        res.push_back(mini);
        res.push_back(maxi);
        return res;
    }
};

int main() {
    int n, k;
    cout << "Enter number of candies: ";
    cin >> n;

    vector<int> prices(n);
    cout << "Enter prices of candies:\n";
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    cout << "Enter k (for Buy k Get 1 free): ";
    cin >> k;

    Solution obj;
    vector<int> ans = obj.minMaxCandy(prices, k);

    cout << "Minimum cost: " << ans[0] << endl;
    cout << "Maximum cost: " << ans[1] << endl;

    return 0;
}
