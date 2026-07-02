class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int Maxlen = 0;
        int left = 0;
        unordered_set<char>st;
        for(int right=0;right<n;right++){
            if(st.find(s[right]) == st.end()){
                st.insert(s[right]);
                Maxlen = max(Maxlen,right-left+1);
                right++;
            }
            else{
                st.erase(s[left]);
                left++;
            }
        }
        return Maxlen;

        
    }
};
