class Solution {
public:
    string removeOuterParentheses(string s) {
    string res; int lev= 0; 
    for (char c :s)
        if (c =='(') {
            if (lev>0)
                res +=c;
            lev++;
        } else {
            lev--;
            if (lev > 0)
                res += c;
        }

    return res;
}
    
};