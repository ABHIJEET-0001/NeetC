class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";

        for(string s : strs) {
            ans += to_string(s.size()) + "#" + s;
        }

        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;

        while(i < s.size()) {

            int j = i;

            // length find karo
            while(s[j] != '#') {
                j++;
            }

            int len = stoi(s.substr(i, j - i));

            // '#' ke baad string
            j++;

            ans.push_back(s.substr(j, len));

            // next string par jao
            i = j + len;
        }

        return ans;
    }
};