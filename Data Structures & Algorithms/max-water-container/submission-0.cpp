class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size() - 1;
        int maxwater = 0;

        while (i < j) {
            int h = min(heights[i], heights[j]);
            int w = j - i;
            int area = h * w;

            maxwater = max(maxwater, area);

            if (heights[i] < heights[j]) {
                i++;
            } else {
                j--;
            }
        }

        return maxwater;
    }
};