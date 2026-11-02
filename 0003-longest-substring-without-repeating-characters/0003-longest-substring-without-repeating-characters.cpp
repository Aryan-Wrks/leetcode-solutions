class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> last(256, -1);   // last seen index of each character
        int left = 0, best = 0;

        for (int right = 0; right < (int)s.size(); right++) {
            unsigned char c = s[right];

            // If c was seen inside the current window, shrink the window
            if (last[c] >= left) {
                left = last[c] + 1;
            }

            last[c] = right;
            best = max(best, right - left + 1);
        }
        return best;
    }
};