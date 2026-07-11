class Solution {
public:
    vector<vector<int>> result;
    int n;
    void solve(int idx, vector<int>& nums, vector<int>& temp, unordered_set<int>& st){
        if(idx>=n){
            result.push_back(temp);
            return result;
        }
        for(int i=0;i<n;i++){
            if(st.count(nums[i]) == 0){
                st.insert(nums[i]);
                temp.push_back(nums[i]);
                solve(idx+1,nums,temp,st);
                st.erase(nums[i]);
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        n = nums.size();
        unordered_set<int> st;
        vector<int> temp;
        solve(0,nums,temp,st);
        return result;
        
    }
};
