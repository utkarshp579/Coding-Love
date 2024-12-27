class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0, one = 0, two = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0)
                zero++;
            else if (nums[i] == 1)
                one++;
            else
                two++;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (i < zero)
                nums[i] = 0;
            else if (i < (zero + one))
                nums[i] = 1;
            else
                nums[i] = 2;
        }
    }
};
/*
dutch flag algorithm
 void sortColors(vector<int>& nums) {
       int n=nums.size();
        int low=0 , mid=0 , high=n-1;
// high n-1 ke aage saare 2 hi
// low se pehle saare 0 hi.
        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid]==1)
            {
                mid++;
            }

            else
            {
                swap(nums[mid],nums[high]);
                high--;
            }
        }
        
    }
*/