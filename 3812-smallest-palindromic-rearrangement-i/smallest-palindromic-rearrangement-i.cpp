class Solution {
public:
    string smallestPalindrome(string s) {
          vector<int> freq(26, 0);
        for (char c : s)
            freq[c - 'a']++;
        string l = "";
        char mid = 0;
        for (int i = 0; i < 26; i++) {
            l.append(freq[i] / 2,char('a' +i));
            if (freq[i]% 2)
                mid = char('a' +i);
        }
        string r = l;
        reverse(r.begin(),r.end());

        if (mid)
            return l+ mid + r;
        return l +r;
    }
};