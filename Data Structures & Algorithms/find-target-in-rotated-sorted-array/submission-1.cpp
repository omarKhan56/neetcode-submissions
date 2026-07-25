class Solution {
   public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int ans = 0;
        while(low<high){
            int mid = (low+high)/2;
            if(nums[mid]>nums[high]){
                low = mid+1;
                ans = mid;
            }
            else{
                high = mid;
            }
        }
        return nums[high];

    }
};
