class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string ans = "";
        string strs1 = strs[0];
        string strs2 = strs[strs.size()-1];
        for(int i=0;i<strs1.size();i++){
            if(strs1[i] == strs2[i]){
                ans+=strs1[i];
            }
            else{
                return ans;
            }
        }
        return ans;
        
    }
};