class Solution {
public:
    string minWindow(string s, string t) {

        unordered_map<char, int> need;
        unordered_map<char, int> window;

      
        for(char c : t) {
            need[c]++;
        }

        int l = 0;
        int have = 0;
        int needCount = need.size();

        int minLen = INT_MAX;
        int start = 0;

       
        for(int r = 0; r < s.size(); r++) {

            char c = s[r];
            window[c]++;

          
            if(need.count(c) && window[c] == need[c]) {
                have++;
            }

           
            while(have == needCount) {

                if(r - l + 1 < minLen) {
                    minLen = r - l + 1;
                    start = l;
                }

                
                char leftChar = s[l];
                window[leftChar]--;

                if(need.count(leftChar) &&
                   window[leftChar] < need[leftChar]) {
                    have--;
                }

                l++;
            }
        }

        if(minLen == INT_MAX)
            return "";

        return s.substr(start, minLen);
    }
};