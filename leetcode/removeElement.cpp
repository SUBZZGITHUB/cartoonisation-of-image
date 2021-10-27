class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int a = nums.size(), m = 0, n = 0;
        while (m < a) 
        {
            if (nums[m] != val) 
            {
                nums[n] = nums[m];
                ++n;
            }
            ++m;
        }
        return n;
    }
};