class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
         sort(nums.begin(), nums.end());
        int n =nums.size();
        int l =0;
        int r = (n+ 1)/ 2;
        int ans =0;
        while(l <n /2 &&r <n){
            if (2LL * nums[l] <=nums[r]){
                ans +=2;
                l++;
                r++;
            } else {
                r++;
            }
        }
        return ans;
    }
};