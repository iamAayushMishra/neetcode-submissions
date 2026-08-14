class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        for (auto it : nums) {
            freq[it]++;
        }

        vector<pair<int, int>> db;

        for (auto it : freq) {
            db.push_back(it);
        }

        sort(db.begin(), db.end(), [](auto a, auto b) {
            return a.second > b.second;
        });

        vector<int> ans;

        for (int i = 0; i < k; i++) {
            ans.push_back(db[i].first);
        }

        return ans;
    }
};