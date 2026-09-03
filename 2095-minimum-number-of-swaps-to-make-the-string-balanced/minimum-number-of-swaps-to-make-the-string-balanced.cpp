class Solution {
public:
    int minSwaps(string s) {
          int bal= 0;
        int minBal= 0;
        for (char c:s){
            if (c =='[')
                bal++;
            else
                bal--;

            minBal=min(minBal,bal);
        }
        return(-minBal+1)/2;
    }
};