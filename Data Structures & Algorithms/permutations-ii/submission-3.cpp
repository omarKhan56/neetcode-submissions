class Solution {
   public:
    int n;
    vector<vector<int>> result;
    void(int idx, vector<int>& nums, vector<int>& temp) {
        if (idx >= n) {
            result.push_back(temp);
            return;
        }
        for (int i = idx; i < n; i++) {
            if (i > idx && nums[i] == nums[i - 1]) continue;
            temp.push_back(nums[i]);
            solve(i + 1, nums, temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> temp;
        solve(0, nums, temp);
        return result;
    }
};