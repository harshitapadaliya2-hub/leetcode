class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
             long long total = 0;
           for (int n : nums)
            total +=n;
        long long t =total -x;
        if (t <0) 
            return -1;
        if (t==0) 
           return nums.size();
        int l = 0,maxLen = -1;
        long long sum =0;
        for (int r =0; r <nums.size(); r++) {
            sum +=nums[r];
            while (sum >t)
                sum -=nums[l++];
            if (sum ==t)
                maxLen =max(maxLen,r - l +1);
        }
        return maxLen ==-1 ?-1 :nums.size() -maxLen;
    }
};