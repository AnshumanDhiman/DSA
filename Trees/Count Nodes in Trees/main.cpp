#include <iostream>
#include "countNodes.h"
#include <queue>
using namespace std;

void printTree(TreeNode<int> *root)
{
    cout << root->data << " : ";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << ",";
    }
    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        printTree(root->children[i]);
    }
}

TreeNode<int> *takeInputLevelWise()
{
    int rootData;
    cout << "Enter the root data : ";
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);

    queue<TreeNode<int> *> pendingNode;
    pendingNode.push(root);

    while (pendingNode.size() != 0)
    {
        TreeNode<int> *front = pendingNode.front();
        pendingNode.pop();
        int n;
        cout << "Enter the number of children of " << front->data << " : ";
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int childData;
            cout << "Enter " << i << "th child of " << front->data << endl;
            cin >> childData;
            TreeNode<int> *childNode = new TreeNode<int>(childData);
            front->children.push_back(childNode);
            pendingNode.push(childNode);
        }
    }
    return root;
}

int main()
{
    TreeNode<int> *root = takeInputLevelWise();
    printTree(root);
    cout << countNodes(root) << endl;
}