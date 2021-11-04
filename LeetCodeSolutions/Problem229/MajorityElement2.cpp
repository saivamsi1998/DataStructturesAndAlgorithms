namespace leetcode
{
	class problem229
	{
    public:
        vector<int> majorityElement(vector<int>& nums)
        {
            int a = INT_MIN, b = INT_MIN, counta = 0, countb = 0;
            for (int i = 0; i < nums.size(); i++)
            {
                if (!counta)
                    a = b != nums[i] ? nums[i] : a;
                if (!countb)
                    b = a != nums[i] ? nums[i] : b;
                counta += a == nums[i] ? 1 : b == nums[i] ? 0 : -1;
                countb += b == nums[i] ? 1 : a == nums[i] ? 0 : -1;
            }
            vector<int> res;
            counta = 0, countb = 0;
            for (int i : nums)
            {
                if (i == a)counta++;
                if (i == b)countb++;
            }
            if (counta > nums.size() / 3) res.push_back(a);
            if (countb > nums.size() / 3) res.push_back(b);
            return res;
        }
	};
}