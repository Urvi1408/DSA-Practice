class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int l=nums.size();
        int count;
        for (int i=0;i<l;i++)
        {
            count=0;
            for (int j=0;j<l;j++)
            {
                if (nums[i]==nums[j])
                {
                    count++;
                    if (count>l/2)
                    {
                        return nums[i] ;
                    }
                }
            }
        }
        return -1;
    }
};