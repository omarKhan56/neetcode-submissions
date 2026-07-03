class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0;
        int right = 0;
        while(right<n){
            if(nums[left] == nums[right] && abs(left-right)<=k){
                return true;
            }
            left++;
        }
        return true;

        
    }
};