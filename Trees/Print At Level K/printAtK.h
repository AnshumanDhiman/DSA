
void printAtLevelK(TreeNode<int> *root, int level)
{
    if (root == NULL)
    {
        return;
    }
    if (level == 0)
    {
        cout << root->data << endl;
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        printAtLevelK(root->children[i], level - 1);
    }
}