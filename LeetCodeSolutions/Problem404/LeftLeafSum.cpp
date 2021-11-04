namespace leetcode
{
	class problem404
	{
    private:
        int sum;
        void dfs(TreeNode* node, bool isLeft)
        {
            if (node == nullptr) return;
            if (node->left == nullptr && node->right == nullptr && isLeft) sum += node->val;
            dfs(node->left, true);
            dfs(node->right, false);
        }
    public:
        int sumOfLeftLeaves(TreeNode* root)
        {
            sum = 0;
            dfs(root, false);
            return sum;
        }
	};
    class TreeNode
    {
    public:
        int val;
        TreeNode *left,*right;
    };
}