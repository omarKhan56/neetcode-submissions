class Solution {
   public:
    int n;
    vector<vector<int>> result;
    void solve(int idx,vector<int>& nums, int target, vector<int>& temp){
        if(target == 0){
            result.push_back(temp);
            return;
        }
        if(target<0){
            return;
        }
        for(int i=idx;i<n;i++){
            temp.push_back(nums[i]);
            solve(i,nums,target-nums[i],temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        n = nums.size();
        vector<int> temp;
        solve(0,nums,target,temp);
        return result;
    }
};
