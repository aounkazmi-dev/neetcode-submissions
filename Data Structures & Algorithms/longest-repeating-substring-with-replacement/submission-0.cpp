class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0;
        int maxFreq = 0;
        int ans = 0;

        unordered_map<char, int> freq;

        for (int right = 0; right < s.length(); right++) {

            freq[s[right]]++;

            maxFreq = max(maxFreq, freq[s[right]]);

            // characters we need to replace
            int replacements = (right - left + 1) - maxFreq;

            // window is invalid
            if (replacements > k) {
                freq[s[left]]--;
                left++;
            }

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};