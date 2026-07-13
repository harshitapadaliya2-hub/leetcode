class Solution {
public:
    double average(vector<int>& salary) {
             int sum = 0;
        int miin =INT_MAX, maax=INT_MIN;
         for(int s :salary) {
            sum +=s;
            miin =min(miin, s);
            maax =max(maax, s);
        }
        return (double)(sum -miin - maax) /(salary.size()-2); 
    }
};