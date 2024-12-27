class Solution {
public:
    void nextPermutation(vector<int>& nums) {
            int n = nums.size();
    int idx = -1,i,j = -1,temp;
    for (i = n-2; i >=0; i--)
    {
        if(nums[i]<nums[i+1]){
            idx = i;
            break;
        }
    }
    if(idx==-1){
        reverse(nums.begin(),nums.end());
        return;
    }
    reverse(nums.begin()+idx + 1,nums.end());
    for (i = idx + 1; i < n; i++)
    {
        if(nums[i]> nums[idx]){
            j = i;
            break;
        }
    }
    temp = nums[idx];
    nums[idx] = nums[j];
    nums[j] = temp;
    return;
    }
};