class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int maax =*max_element(nums.begin(),nums.end());
        int minn = *min_element(nums.begin(),nums.end());
         return max(0, maax -minn -2 *k);
    }
};