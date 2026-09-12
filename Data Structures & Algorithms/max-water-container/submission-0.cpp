class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0, right = heights.size() - 1;
        int maxArea = 0;
        int height;
        int width;

        while (left < right) {
            height = min(heights[left], heights[right]);
            width = right - left;
            maxArea = max(maxArea, width * height);

            if (heights[left] < heights[right]) left++;
            else right--;
        }

        return maxArea;
    }
};
