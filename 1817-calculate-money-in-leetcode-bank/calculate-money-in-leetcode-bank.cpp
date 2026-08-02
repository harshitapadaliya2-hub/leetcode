class Solution {
public:
    int totalMoney(int n) {
      int ans =0;
        int mon=1;
        while(n >0) {
            for (int day = 0;day <7 && n>0; day++) {
                ans += mon + day;
           n--;
            }
            mon++;
        }
        return ans;   
    }
};