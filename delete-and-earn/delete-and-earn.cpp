class Solution {
public:
    
    int deleteAndEarn(vector<int>& nums) {
        unordered_map<int, int> freq;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            freq[nums[i]]++;
        }
        int max_key = 0;
        for (auto it = freq.begin(); it != freq.end(); it++) {
            max_key = max(max_key, it->first);
        }
        vector<int> dp(max_key+1);
        dp[1] = freq[1];
        for (int i = 2; i <= max_key; i++) {
            if (freq.find(i) == freq.end()) {
                dp[i] = dp[i-1];
            } else {
                dp[i] = max(dp[i-1], dp[i-2] + i * freq[i]);
            }
        }
        return dp[max_key];
    }
};