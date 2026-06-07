class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        unordered_map<char,int> Smp;
        unordered_map<char,int> Tmp;
        for(int i=0;i<s.length();i++){
            Smp[s[i]]++;
        }
        for(int i=0;i<t.length();i++){
            Tmp[t[i]]++;
        }
        for(auto it : Smp){
            if(Tmp[it.first] != it.second){
                return false;
            }
        }
        return true;


        
    }
};
