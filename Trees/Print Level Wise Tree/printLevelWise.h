#include <queue>
void printLevelWise(TreeNode<int> *root)
{
    queue<TreeNode<int> *> pendingNode;
    pendingNode.push(root);

    while (pendingNode.size() != 0)
    {
        TreeNode<int> *front = pendingNode.front();
        pendingNode.pop();
        cout << front->data << ":";
        for (int i = 0; i < front->children.size(); i++)
        {
            if (i < (front->children.size() - 1))
            {
                cout << front->children[i]->data << ",";
            }
            else
            {
                cout << front->children[i]->data;
            }
            pendingNode.push(front->children[i]);
        }
        cout << "\n";
    }
}