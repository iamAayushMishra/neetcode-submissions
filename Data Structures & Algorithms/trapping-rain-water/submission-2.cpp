class Solution {
public:
    int trap(vector<int>& heights) {
        int left = 0, right = heights.size() - 1;
        int _lMax = heights[left], _rMax = heights[right];
        int totalWaterTrapped = 0;

        while (left < right) {
            if (_lMax < _rMax) {
                left++;
                _lMax = max(_lMax, heights[left]);
                totalWaterTrapped += _lMax - heights[left];
            } else {
                right--;
                _rMax = max(_rMax, heights[right]);
                totalWaterTrapped += _rMax - heights[right];
            }
            
        }

        return totalWaterTrapped;
    }
};
