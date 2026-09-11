class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
           sort(heaters.begin(), heaters.end());
        int ans = 0;
        for (int h: houses) {
            auto i =lower_bound(heaters.begin(),heaters.end(),h);
            int r= INT_MAX;
              int l = INT_MAX;
            if (i!=heaters.end()) {
                r = *i - h;
            }
            if (i!=heaters.begin()) {
                --i;
                l= h- *i;
            }
            int closest= min(l, r);
            ans = max(ans, closest);
        }
        return ans;
    }
};