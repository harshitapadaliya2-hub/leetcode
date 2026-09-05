class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
          long long ans = 0;
        vector<int> freq(60,0);
        for (int t:time) {
            int rem =t%60;
             int n=(60 -rem)% 60;
            ans +=freq[n];
             freq[rem]++;
        }
        return ans;   
    }
};