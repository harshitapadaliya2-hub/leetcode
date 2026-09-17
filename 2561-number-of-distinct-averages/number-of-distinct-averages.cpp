class Solution {
public:
    int distinctAverages(vector<int>& nums) {
             sort(nums.begin(), nums.end());
            set<int> a;
         int l= 0;
        int r= nums.size() - 1;
        while (l<r) {
            a.insert(nums[l] +nums[r]);
            l++;
            r--;
        }
        return a.size();  
    }
};