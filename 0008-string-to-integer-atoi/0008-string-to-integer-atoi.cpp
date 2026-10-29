class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.size();
        int sign = 1;
        long long result = 0;   // long long so it doesn't overflow while building

        // Step 1: skip leading spaces
        while (i < n && s[i] == ' ') i++;

        // Step 2: read sign
        if (i < n && (s[i] == '-' || s[i] == '+')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        // Step 3: read digits
        while (i < n && isdigit(s[i])) {
            result = result * 10 + (s[i] - '0');

            // Step 4: clamp if out of range
            if (sign * result > INT_MAX) return INT_MAX;
            if (sign * result < INT_MIN) return INT_MIN;

            i++;
        }

        return (int)(sign * result);
    }
};