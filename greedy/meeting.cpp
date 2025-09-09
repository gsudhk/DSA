#include <bits/stdc++.h>
using namespace std;

static bool cmp(pair<int,int> a, pair<int,int> b) {
    return a.second < b.second;
}

int maxMeetings(vector<int>& start, vector<int>& end) {
    vector<pair<int,int>> v;
    for(int i = 0; i < start.size(); i++) {
        v.push_back({start[i], end[i]});
    }

    sort(v.begin(), v.end(), cmp);

    int res = 1;
    int endtime = v[0].second;

    for(int i = 1; i < v.size(); i++) {
        if(v[i].first > endtime) {
            res++;
            endtime = v[i].second;
        }
    }
    return res;
}

int main() {
    int n;
    cout << "Enter number of meetings: ";
    cin >> n;

    vector<int> start(n), end(n);

    cout << "Enter start times:\n";
    for(int i = 0; i < n; i++) cin >> start[i];

    cout << "Enter end times:\n";
    for(int i = 0; i < n; i++) cin >> end[i];

    int ans = maxMeetings(start, end);
    cout << "Maximum number of meetings: " << ans << endl;

    return 0;
}
