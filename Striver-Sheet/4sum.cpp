//link - "https://leetcode.com/problems/4sum/"


class Solution {
public:

    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        set<vector<int> > s;
        for(int l = 0;l<nums.size();l++){
            for (int i = l+1; i < nums.size(); i++){
                int j = i + 1;
                int k = nums.size() - 1;
                while (j < k) {// we not do play  with -1 in above loop condition because of this line
                    long long int sum = nums[i] + nums[j];
                    sum +=  nums[k];
                    sum += nums[l];
                    if (sum == target) {
                        s.insert({nums[l],nums[i], nums[j], nums[k]});// learning
                        j++;
                        k--;
                    } else if (sum < target) {
                        j++;
                    } else {
                        k--;
                    }
                }
            }
        }
        vector<vector<int>> res;
        for(auto it : s)
            res.push_back(it);
        return res;
    }
};
