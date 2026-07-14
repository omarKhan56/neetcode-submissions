class Solution {
   public:
    int n;
    vector<vector<int>> result;
    void solve(int idx, vector<int>& nums, vector<int>& temp) {
        result.push_back(temp);

        for (int i = idx; i < n; i++) {
            temp.push_back(nums[i]);
            solve(i + 1, nums, temp);
            temp.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        n = nums.size();
        vector<int> temp;
        solve(0, nums, temp);
        return result;
    }
};
