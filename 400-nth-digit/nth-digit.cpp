class Solution {
public:
    int findNthDigit(int n) 
    {
        long long digit = 9;   
        int first =1;       
        int len =1;        
        while(n > digit * len)
        {
            n -= digit * len;
            len++;
            first *= 10;
            digit *= 10;
        }
        first = first + (n - 1) / len;
        string str = to_string(first);
        return str[(n - 1) % len] - '0';
    }
};