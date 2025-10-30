#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t-- > 0) {
        long long n;
        cin >> n;
        vector<long long> arr(n);
        for (long long i = 0; i < n; i++) {
            cin >> arr[i];
        }
        //pair for original loaction tracing
        vector<pair<long long, long long>> nums(n);
        for (long long i = 0; i < n; i++) {
            nums[i] = {arr[i], i};
        }
        //sort based on
        sort(nums.begin(), nums.end());

        // prefix sum
        vector<long long> pre(n);
        pre[0] = nums[0].first;
        for (long long i = 1; i < n; i++) {
            pre[i] = pre[i - 1] + nums[i].first;
        }

        vector<long long> ans(n);

        for (long long i = 0; i < n; i++) {
            long long j = i;
            long long found = i;

            while (j < n) {
                pair<long long, long long> temp = {pre[j] + 1, LLONG_MIN};
                long long idx = lower_bound(nums.begin(), nums.end(), temp) - nums.begin();
                idx--; // step back to last valid index

                if (idx == j) break;
                found += idx - j;
                j = idx;
            }

            ans[nums[i].second] = found;
        }

        for (long long i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
