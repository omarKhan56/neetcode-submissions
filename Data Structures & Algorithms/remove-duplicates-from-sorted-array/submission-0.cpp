class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        ordered_set<int>st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        return st.size();
        
    }
};