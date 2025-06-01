class Solution {
public:
    int maxScore(string s) {
         int totalOnes = 0;
        for (char c : s) {
            if (c == '1') totalOnes++;
        }

        int maxScore = 0;
        int leftZeros = 0;
        int rightOnes = totalOnes;

        // We go until s.length() - 1 to ensure both substrings are non-empty
        for (int i = 0; i < s.length() - 1; ++i) {
            if (s[i] == '0') leftZeros++;
            else rightOnes--;

            int score = leftZeros + rightOnes;
            maxScore = max(maxScore, score);
        }

        return maxScore;  
    }
};