class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int sum = 0;
        int maxi = 0;

        int freq[10001] = {0};

        for (int right = 0; right < n; right++) {
            sum += nums[right];
            freq[nums[right]]++;

            while (freq[nums[right]] > 1) {
                freq[nums[left]]--;
                sum -= nums[left];
                left++;
            }

            if (sum > maxi) {
                maxi = sum;
            }
        }

        return maxi;
    }
};