class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
          int n = nums.size();
        vector<long long> prefix(n+1,0);
        for (int i = 0; i<n;i++) {
               prefix[i+ 1] =prefix[i] +nums[i];
        }
        vector<int> ans(n);
        for (int i =0;i< n; i++) {
             long long x =nums[i];

            long long lSum = prefix[i];
            long long l= x*i - lSum;
            long long rSum =prefix[n]- prefix[i + 1];
            long long r= rSum-x *(n - i - 1);
            ans[i] = l+ r;
        }
        return ans;
    }
};