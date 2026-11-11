class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
         long long ans = LLONG_MAX;
        ans = min(ans, (long long)need1 * cost1 + (long long)need2 * cost2);

        {
            long long k = min(need1, need2);
            long long cost = k * costBoth
                + (long long)(need1 - k) * cost1
                + (long long)(need2 - k) * cost2;
            ans = min(ans, cost);
        }

        {
            long long k = max(need1, need2);
            long long cost = k * costBoth;
            ans = min(ans, cost);
        }
        return ans; 
    }
};