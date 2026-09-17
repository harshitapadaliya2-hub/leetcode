class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
             sort(arr.begin(), arr.end());
        int n =arr.size();
           int m =arr[(n -1)/2];
        int l=0;
        int r = n -1;
        vector<int> ans;
        while (k--){
            int leftDiff =abs(arr[l] - m);
            int rightDiff =abs(arr[r] - m);
            if (rightDiff>=leftDiff) {
                ans.push_back(arr[r]);
                  r--;
            } else {
                ans.push_back(arr[l]);
                l++;
            }
        }
        return ans;
    }
};