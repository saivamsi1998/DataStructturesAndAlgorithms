namespace leetcode
{
	class permutationsSolution1
	{
    private:
        vector<bool> isInPermutation;
        vector<vector<int>> res;
        void backtrack(vector<int>& arr, vector<int>& nums)
        {
            if (arr.size() == nums.size())
            {
                res.push_back(arr);
                return;
            }
            for (int i = 0; i < isInPermutation.size(); i++)
            {
                if (!isInPermutation[i])
                {
                    isInPermutation[i] = true;
                    arr.push_back(nums[i]);
                    backtrack(arr, nums);
                    isInPermutation[i] = false;
                    arr.pop_back();
                }
            }
        }
    public:
        vector<vector<int>> permute(vector<int>& nums)
        {
            isInPermutation = vector<bool>(nums.size());
            vector<int> temp;
            backtrack(temp, nums);
            return res;
        }
	};
    class permutationsSolution2
    {
    public:
        vector<vector<int>> permute(vector<int>& nums)
        {
            vector<vector<int>> res;
            sort(nums.begin(), nums.end());
            do
            {
                res.push_back(nums);
            } while (next_permutation(nums.begin(),nums.end());
            return res;
        }
    };
}