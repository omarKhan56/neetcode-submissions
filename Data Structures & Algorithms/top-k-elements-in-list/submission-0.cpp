class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans; //to store the final answer
        int n = nums.size();
        unordered_map<int, int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        vector<pair<int,int>> v;
        for(auto it : mp){
            v.push_back({it.second, it.first});
        }
        sort(v.begin(),v.end());
        for(int i = v.size()-1;k>0;i--,k--){
            ans.push_back(v[i].second);
        }
        return ans;



        
    }
};
