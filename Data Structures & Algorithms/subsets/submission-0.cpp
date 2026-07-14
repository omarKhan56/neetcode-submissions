class Solution {
public:
    int n;
    vector<vector<int>> result;

    void solve(int idx, vector<int>& nums, vector<int>& temp,
               unordered_set<int>& st) {
        if (idx >= n) {
            result.push_back(temp);
            return;
        }
        //idx is used to keep track of which position in the permutation you're currently filling.
        for (int i = 0; i < n; i++) {

            if (st.count(nums[i]) == 0) {
                st.insert(nums[i]);
                temp.push_back(nums[i]);

                solve(idx + 1, nums, temp, st);

                st.erase(nums[i]);
                temp.pop_back();
            }
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        n = nums.size();
        vector<int> temp;
        unordered_set<int> st;
        solve(0, nums, temp, st);
        return result;
    }
};