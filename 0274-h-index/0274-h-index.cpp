class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end());
        int count = 0, ans = 0;
        for (int i = citations.size() - 1; i >= 0; i--) {
            if (citations[i] < count + 1) {
                ans = count;
                break;
            }
            count++;
        }
        if (ans == 0) {
            return count;   // In case all papers have at least count citations
        }
        return ans;
    }
};
