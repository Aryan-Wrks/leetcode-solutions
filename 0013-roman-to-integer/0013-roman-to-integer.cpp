class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> values = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int total = 0;  // start from 0
        for (int i = 0; i < s.size(); i++) {  // visit each character of string

            if (i + 1 < s.size() && values[s[i]] < values[s[i + 1]]) // here is 2 parts: A = does the character exist ? B = Is the value of the current symbol less than the value of the next one?

                total -= values[s[i]]; // is the condition is true subtract the current value.
                
            else
                total += values[s[i]];  // else add them
        }
        return total;
    }
};