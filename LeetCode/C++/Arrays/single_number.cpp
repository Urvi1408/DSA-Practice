class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int l=size(nums);
        int count; 
        for (int i=0;i<l;i++)
        {
            count=0;
            for (int j=0;j<l;j++)
            {
                if (nums[i]==nums[j])
                {
                    count++;
                }
            }
            if (count==1)
            {
                return nums[i];
            }
        }
        return -1;
    }
};