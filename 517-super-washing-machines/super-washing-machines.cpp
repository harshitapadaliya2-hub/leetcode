class Solution {
public:
    int findMinMoves(vector<int>& machines) {
          int total = 0;
        for (int x :  machines)
         total += x;
        int n = machines.size();
        if (total % n!=0) 
        return -1;
        int target = total/ n;
        int balance = 0, ans =0;
        for (int x : machines) {
            int diff = x -target;
            balance +=diff;
            ans = max(ans, max(abs(balance),diff));
        }
        return ans;
    }
};