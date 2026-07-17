class Solution {
   public:
    int n;
    vector<vector<int>> result;
    bool isPresent(vector<int>& temp) {
        for (int i = 0; i < result.size(); i++) {
            if (result[i] == temp) {
                return true;
            }
        }
        return false;
    }
    void solve(int idx, vector<int>& nums) {
        if (idx == n) {
            if (!isPresent(nums)) {
                result.push_back(nums);
                return;
            }
        }
        for (int i = idx; i < n; i++) {
            swap(nums[idx], nums[i]);
            solve(idx + 1, nums);
            swap(nums[idx], nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        n = nums.size();
        solve(0, nums);
        return result;
    }
};