class Solution {
public:
    int numberOfSubarrays1(vector<int>& nums, int k) {
        int l = 0, r = 0, cnt = 0, ans = 0;
        while (r < nums.size()) {

            if (nums[r] % 2 != 0) {
                cnt++;
            }

            while (cnt > k) {
                if (nums[l] % 2 != 0)
                    cnt--;
                l++;
            }
            ans += r - l + 1;
            r++;
        }

        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        int l = 0, r = 0, cnt = 0, ans = 0;
        while (r < nums.size()) {

            if (nums[r] % 2 != 0) {
                cnt++;
            }

            while (cnt > k) {
                if (nums[l] % 2 != 0) {
                    cnt--;
                }
                l++;
            }
            ans += r - l + 1;
            r++;
        }
        int ans1 = numberOfSubarrays1(nums, k - 1);
        return ans - ans1;
    }
};