class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
         sort(potions.begin(), potions.end());
           vector<int> ans;
               for (long long spell:spells) {
            int l= 0;
            int r =potions.size();
              while (l<r){
                 int mid = l+ (r- l)/2;
                if (spell*potions[mid] >=success)
                    r= mid;
                else
                 l = mid + 1;
            }
            ans.push_back(potions.size()-l);
        }
        return ans;
    }
};