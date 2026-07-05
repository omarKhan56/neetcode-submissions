class Solution {
public:
    int characterReplacement(string s, int k) {
    int left = 0, right = 0;
    int maxCount = 0; // Track the count of the most frequent character in the current window
    int maxLength = 0;
    unordered_map<char, int> freq;
    
    while (right < s.length()) {
        freq[s[right]]++;
        maxCount = max(maxCount, freq[s[right]]);
        
        // If the remaining characters in the window exceed the allowed changes (k), shrink the window
        //Replacement needed = WindowSize - MaxCount
        while ((right - left + 1) - maxCount > k) {
            freq[s[left]]--;
            left++;
        }
        
        maxLength = max(maxLength, right - left + 1);
        right++;
    }
    
    return maxLength;
        
    }
};
