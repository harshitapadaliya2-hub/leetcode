class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = 0;
        int m = 0;
        int h =nums.size()-1;
        while(m<=h){
            if(nums[m]==0){ //topper condition -> aghe dalo
               swap(nums[l],nums[m]);
            l++;
            m++;
        }
        else if(nums[m]==1){ //best case -> do nothin
                m++;
        }
        else{ //m==2 failuer -> piche dalo
                swap(nums[m],nums[h]);
                h--;
        }
    }
    }
};