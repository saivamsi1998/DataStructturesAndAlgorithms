namespace leetcode
{
	using namespace std;
	class problem1031
	{
	public:
        int maxSumTwoNoOverlap(vector<int>& nums, int m, int n)
        {
            nums.insert(nums.begin(), 0);
            for (int i = 1; i < nums.size(); i++)
                nums[i] += nums[i - 1];

            int res = INT_MIN;
            for (int i = 1; i < nums.size(); i++)
                for (int j = i + 1; j < nums.size(); j++)
                {
                    int midsum = j - i > 1 ? nums[j - 1] - nums[i] : 0;
                    int a = j + m - 1 < nums.size() && i - n >= 0 ? nums[j + m - 1] - nums[i - n] - midsum : INT_MIN;
                    int b = j + n - 1 < nums.size() && i - m >= 0 ? nums[j + n - 1] - nums[i - m] - midsum : INT_MIN;
                    res = max(res, max(a, b));
                }
            return res;
        }
	};
}