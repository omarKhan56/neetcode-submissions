class Solution {
   public:
   int n;
    vector<vector<int>> result;
    void solve(int idx, vector<int>& candidates, int target, vector<int>& temp) {
        if (target == 0) {
            result.push_back(temp);
            return;
        }
        for (int i = idx; i < n; i++) {
            if (i > idx && candidates[i] == candidates[i - 1]) {
                continue;
            }

            temp.push_back(nums[i]);
            solve(i + 1, nums, target - nums[i], temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        n = candidates.size();
        sort(candidates.begin(), candidates.end());
        vector<int> temp;
        solve(0, candiates, target, temp);
        return result;
    }
};
