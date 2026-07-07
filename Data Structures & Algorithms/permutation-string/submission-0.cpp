class Solution {
   public:
    bool checkInclusion(string s1, string s2) {
        int s = s1.length();
        int t = s2.length();
        if (s > t) {
            return false;
        }
        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;
        for (int i = 0; i < s; i++) {
            mp1[s1[i]]++;
        }
        for (int i = 0; i < s; i++) {
            mp2[s2[i]]++;
        }
        if (mp1 == mp2) {
            return true;
        }
        
    }
};