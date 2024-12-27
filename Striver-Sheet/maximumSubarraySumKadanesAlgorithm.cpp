class Solution {
public:
// take sum from +ve number , if turns 
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0];
        int curr = 0;
        for(int i = 0;i<nums.size();i++){
            // ans
            curr += nums[i];
            ans = max(curr,ans);
            if(curr < 0) curr = 0;
        }
        return ans;
    }
};

/*
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> dp(nums);
        for(int i = 1; i < size(nums); i++) 
            dp[i] = max(nums[i], nums[i] + dp[i-1]);        
        return *max_element(begin(dp), end(dp));
    }
};
*/