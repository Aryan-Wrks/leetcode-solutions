class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();

        // Start with the first k cards
        int sum = 0;
        for (int i = 0; i < k; i++) {
            sum += cardPoints[i];
        }
        int best = sum;

        // Swap one card at a time from the prefix to the suffix
        for (int i = 0; i < k; i++) {
            sum -= cardPoints[k - 1 - i];     // drop from end of prefix
            sum += cardPoints[n - 1 - i];     // add from end of array
            best = max(best, sum);
        }

        return best;
    }
};