class Solution {
public:
    int numberOfSubstrings(string s) {
        int lastA = -1, lastB = -1, lastC = -1;
        int count = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a') lastA = i;
            else if (s[i] == 'b') lastB = i;
            else lastC = i;

            // if all three have been seen at least once
            int smallest = min(lastA, min(lastB, lastC));
            count += smallest + 1;   // if any is -1, this adds 0
        }

        return count;
    }
};