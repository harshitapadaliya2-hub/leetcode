class Solution {
public:
    int minimumScore(string s, string t) {
        int n = s.size();
        int m = t.size();
        vector<int> l(m, -1), r(m, n);
        int p =0;
        int left =0;
        for (int i = 0;i<m; i++){
            while (p< n&&s[p]!=t[i])
                p++;
            if (p==n)
                break;
            l[i]=p++;
            left++;
        }
        p = n-1;
        int right=m;
        for (int i =m -1;i>= 0;i--){
            while (p>=0 &&s[p]!=t[i])
                p--;
            if (p<0)
                break;
            r[i]=p--;
            right =i;
        }
    int ans =min(m -left,right);
        int j =right;
        for(int i = 0; i<left; i++){
            while (j <m&& (j <= i||r[j]<=l[i]))
                j++;
            if (j<m)
                ans =min(ans,j -i -1);
        }
        return ans;
    }
};
    
