class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output(nums.size(), 0);
        int total = 1;
        int zeroCount = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0)
                zeroCount++;
            else
                total *= nums[i];
        }

        for (int i = 0; i < nums.size(); i++) {
            if (zeroCount > 1) {
                output[i] = 0;
            }
            else if (zeroCount == 1) {
                if (nums[i] == 0)
                    output[i] = total;
                else
                    output[i] = 0;
            }
            else {
                output[i] = total / nums[i];
            }
        }

        return output;
    }
};