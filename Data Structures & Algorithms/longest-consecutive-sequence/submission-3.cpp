class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {
            int seq = 0;
            for (int j = i; j < n; j++) {
                if(nums[i] < nums[j]){
                    seq++;
                }
            }
            seq = max(seq,j-i+1);
        }
        return seq;
    }
};
