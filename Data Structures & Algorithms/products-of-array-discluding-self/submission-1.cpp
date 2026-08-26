class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output(nums.size(), 1);

        int left = 1;

        // Store product of elements to the left
        for (int i = 0; i < nums.size(); i++) {
            output[i] = left;
            left *= nums[i];
        }

        int right = 1;

        // Multiply by product of elements to the right
        for (int i = nums.size() - 1; i >= 0; i--) {
            output[i] *= right;
            right *= nums[i];
        }

        return output;
    }
};