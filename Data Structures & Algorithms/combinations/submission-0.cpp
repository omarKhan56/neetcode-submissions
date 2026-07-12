class Solution {
   public:
    vector<vector<int>> result;
    void solve(int idx,int n, int k, vector<int> &temp){
        if(idx>=n){
            result.push_back(temp);
            return;
        }
        for(int i=idx;i<n;i++){
            temp.push_back(i);
            solve(idx+1,n,k-1,temp);
            temp.pop_back();
        }

    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;
        solve(0,n,k,temp);
        return result;
    }
};