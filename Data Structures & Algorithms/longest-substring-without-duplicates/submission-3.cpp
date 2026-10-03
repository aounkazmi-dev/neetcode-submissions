class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_set<char> st;

        int left = 0;
        int maxs = 0;

        for (int right = 0; right < s.length(); right++) {

            while (st.contains(s[right])) {
                st.erase(s[left]);
                left++;
            }

            st.insert(s[right]);

            maxs = max(maxs, right - left + 1);
        }

        return maxs;
    }
};