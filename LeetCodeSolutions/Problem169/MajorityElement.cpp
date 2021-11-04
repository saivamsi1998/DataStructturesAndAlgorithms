namespace leetcode
{
	class problem169
	{
        int majorityElement(vector<int>& nums)
        {
            int res = nums[0];
            for (int count = 1, i = 1; i < nums.size(); i++)
            {
                if (res == nums[i]) count++;
                else count--;
                if (count < 0)
                {
                    res = nums[i];
                    count = 1;
                }
            }
            return res;
        }
	};
}