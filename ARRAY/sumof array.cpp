#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long minimumCost(vector<int>& nums, int k, int dist) {
        int n = nums.size();
        int need = k - 2; // we need k-2 smallest from the window after s

        // small: k-2 smallest elements, large: remaining
        multiset<long long> small, large;
        long long sumSmall = 0;

        auto add = [&](long long x) {
            if ((int)small.size() < need) {
                small.insert(x);
                sumSmall += x;
            } else {
                // compare with largest in small
                auto it = prev(small.end());
                if (need > 0 && x < *it) {
                    long long y = *it;
                    small.erase(it);
                    sumSmall -= y;

                    small.insert(x);
                    sumSmall += x;

                    large.insert(y);
                } else {
                    large.insert(x);
                }
            }
        };

        auto remove = [&](long long x) {
            auto itSmall = small.find(x);
            if (itSmall != small.end()) {
                small.erase(itSmall);
                sumSmall -= x;
            } else {
                auto itLarge = large.find(x);
                large.erase(itLarge);
            }

            // rebalance: small must have size = need
            if ((int)small.size() < need && !large.empty()) {
                auto it = large.begin();
                long long y = *it;
                large.erase(it);
                small.insert(y);
                sumSmall += y;
            }
            if ((int)small.size() > need) {
                auto it = prev(small.end());
                long long y = *it;
                small.erase(it);
                sumSmall -= y;
                large.insert(y);
            }
        };

        // initial window for s=1 is [2 ... 1+dist]
        int s = 1;
        int L = s + 1;
        int R = s + dist;

        for (int i = L; i <= R; i++) add(nums[i]);

        long long ans = LLONG_MAX;

        // s ranges from 1 to n-1-dist
        for (s = 1; s <= n - 1 - dist; s++) {
            // cost = nums[0] + nums[s] + sum of k-2 smallest in window
            ans = min(ans, (long long)nums[0] + nums[s] + sumSmall);

            // slide to next s
            // old window: [s+1 ... s+dist]
            // new window: [(s+1)+1 ... (s+1)+dist] = [s+2 ... s+dist+1]
            int outIdx = s + 1;
            int inIdx  = s + dist + 1;

            remove(nums[outIdx]);
            add(nums[inIdx]);
        }

        return ans;
    }
};
