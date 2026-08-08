class Solution {
public:
    vector<int> validSequence(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();

        vector<int> suf(n + 1, 0);

        int j = m - 1;

        for (int i = n - 1; i >= 0; i--) {
            suf[i] = suf[i + 1];

            if (j >= 0 && word1[i] == word2[j]) {
                j--;
                suf[i]++;
            }
        }

        vector<int> ans;
        int pos = 0;
        bool changed = false;

        for (int k = 0; k < m; k++) {
            while (pos < n) {
                if (word1[pos] == word2[k]) {
                    ans.push_back(pos);
                    pos++;
                    break;
                }

                if (!changed && suf[pos + 1] >= m - k - 1) {
                    ans.push_back(pos);
                    pos++;
                    changed = true;
                    break;
                }

                pos++;
            }

            if (ans.size() != k + 1)
                return {};
        }

        return ans;
    }
};