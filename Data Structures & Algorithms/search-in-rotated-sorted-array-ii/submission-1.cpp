class Solution {
   public:
    int FindPivot(vector<int>& nums, int l, int r) {
        while (l < r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] > nums[r]) {
                l = mid + 1;
            } else if (nums[mid] == nums[r]) {
                r = r - 1;
            } else {
                r = mid;
            }
        }
        return r;
    }
    int BinarySearch(vector<int>& nums, int l, int r, int target) {
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                l = mid + 1;
            else
                r = mid - 1;
        }
        return -1;
    }
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot = FindPivot(nums, 0, n - 1);
        if (nums[pivot] == target) {
            return pivot;
        }
        int idx = 1;
        idx = BinarySearch(nums, pivot + 1, n - 1, target);  // right side including  pivot idx
        if (idx != -1) {
            return idx;
        }
        idx = BinarySearch(nums, 0, pivot - 1, target);  // left side of pivot idx
        return idx;
    }
};