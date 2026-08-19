class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
          int n =nums.size();
        vector<long long>ans(n);
        unordered_map<int,vector<int>> mp;
        for (int i =0; i<n;i++)
              mp[nums[i]].push_back(i);
        for (auto &[x,v]:mp) {
             long long sum =0;
            for (int i :v)
                sum +=i;

            long long l=0;

            for (int k =0;k<v.size();k++) {
                long long i =v[k];
                long long r =sum-l - i;
                ans[i] = i* k -l+ r-i *(v.size()-k- 1);
                l+= i;
            }
        }

        return ans;  
    }
};