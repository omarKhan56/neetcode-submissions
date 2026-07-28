class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.length();
        int m = word2.length();
        string ans = "";
        for(int i=0;i<n;i++){
            ans.append(word1[i]);
            for(int j=0;j<m;j++){
                ans.append(word2[j]);
            }
        }
        return ans;
        
    }
};