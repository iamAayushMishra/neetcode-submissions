class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";
        for (auto word: strs) {
            int len = word.length();
            ans += to_string(len) + "#" + word;
        }

        return ans;
    }

    vector<string> decode(string s) {
    vector<string> ans;

    int i = 0;

    while (i < s.length()) {

        // Read the length
        int len = 0;

        while (isdigit(s[i])) {
            len = len * 10 + (s[i] - '0');
            i++;
        }

        // Skip '#'
        i++;

        // Get the word
        string word = s.substr(i, len);
        ans.push_back(word);

        // Move to the next encoded string
        i += len;
    }

    return ans;
}
};
