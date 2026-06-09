class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp;
        int number;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto it : mp){
            if(it.second != 1){
                number+= it.second;
            }
        }
        return number
        

        
    }
};
