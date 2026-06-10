class Solution {
   public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int n = numbers.size();
        int i = 0;
        int j = n - 1;
        while (i <= j) {
            if (numbers[i] + numbers[j] == target) {
                ans.push_back(numbers[i]);
                ans.push_back(numbers[j]);
                i++;
                j--;
            } else if (numbers[i] + numbers[j] > target) {
                j--;
            } else {
                i++;
            }
        }
        return ans;
    }
};
