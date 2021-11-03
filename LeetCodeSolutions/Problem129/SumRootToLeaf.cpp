namespace leetcode
{
	class problem129
	{
    private:
        int res;
        void dfs(TreeNode* node, int n)
        {
            if (node == nullptr) return;
            n = n * 10 + node->val;
            if (node->left == nullptr && node->right == nullptr)
                res += n;
            dfs(node->left, n);
            dfs(node->right, n);
        }
    public:
        int sumNumbers(TreeNode* root)
        {
            res = 0;
            dfs(root, 0);
            return res;
        }
	};
}