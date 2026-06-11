class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int sequence = 0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto it : mp){
            if(it.first == it.first+1){
                sequence++;
            }
        }
        return sequence;

        
    }
};
