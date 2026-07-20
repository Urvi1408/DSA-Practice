class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int s=nums.size();
        int k=0;
        for (int i=0;i<s;i++)
        {
            if(nums[i]!=0)
            {
                nums[k]=nums[i];
                k++;
            }
        }
        for (int i=k;i<s;i++)
        {
            nums[i]=0;
        }
    }
};   