class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
         int n = nums.size();
        int l=k;
        int r= k;
        int minn= nums[k];
        int ans = nums[k];
        while (l>0||r<n -1){
            if (l==0) {
             r++;
                minn=min(minn, nums[r]);
            }
            else if(r ==n -1) {
                l--;
                minn = min(minn,nums[l]);
            }
            else if(nums[l- 1] >=nums[r+ 1]) {
                l--;
                minn = min(minn, nums[l]);
            }
            else {
                r++;
                minn = min(minn, nums[r]);
            }
            int len = r -l + 1;
            ans = max(ans,minn * len);
        }
        return ans;
    }
};