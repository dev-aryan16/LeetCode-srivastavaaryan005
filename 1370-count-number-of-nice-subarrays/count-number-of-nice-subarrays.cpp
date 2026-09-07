class Solution {
public:
        int atmost(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0;
        int cnt = 0;
        int ans = 0;

        for (int r = 0; r < n; r++) {

            if (nums[r] % 2 != 0) {
                cnt++;
            }

            while (cnt > k) {
                if (nums[l] % 2 != 0) {
                    cnt--;
                }
                l++;
            }

            ans += (r - l + 1);
        }

        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        // rough algo
        // inside every window check for odd
        // repeated characters make sense
        // we need to count the subarrays with k odd nos
        return atmost(nums,k)-atmost(nums,k-1);
    }
};