class Solution {
public:

    string encode(vector<string>& strs) {
        string s = "";

        for (string str : strs) {
            s += to_string(str.size());
            s += "#";
            s += str;
        }

        return s;
    }

    vector<string> decode(string s) {
        vector<string> out;

        int i = 0;

        while (i < s.size()) {

            // Get the length
            int len = 0;

            while (s[i] != '#') {
                len = len * 10 + (s[i] - '0');
                i++;
            }

            // Skip #
            i++;

            // Take 'len' characters
            string str = "";

            for (int j = 0; j < len; j++) {
                str += s[i];
                i++;
            }

            out.push_back(str);
        }

        return out;
    }
};