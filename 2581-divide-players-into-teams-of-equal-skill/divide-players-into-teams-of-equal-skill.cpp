class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
          sort(skill.begin(), skill.end());
          
        int t =skill[0]+skill.back();
        long long ans= 0;
         int l =0;
        int r = skill.size()-1;
        while (l <r) {
            if (skill[l] +skill[r]!=t)
                return -1;
          ans += 1LL*skill[l] *skill[r];
            l++;
            r--;
        }
        return ans;
    }
};