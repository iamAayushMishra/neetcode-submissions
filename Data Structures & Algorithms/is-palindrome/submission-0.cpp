class Solution {
public:
    string cleanStr(string s) {
        string ans = "";
        for (auto ch : s) {
            if (isdigit(ch)) ans += ch;
            else if (isalpha(ch) && ch != ' ') ans += tolower(ch);
        }

        return ans;
    }

    bool isPalindrome(string s) {
        string inp = cleanStr(s);
        int n = inp.length();
        int i = 0, j = n-1;

        while (i < j) {
            if (inp[i] != inp[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};
