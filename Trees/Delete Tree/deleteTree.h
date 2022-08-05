#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class TreeNode
{
public:
    T data;
    vector<TreeNode<T> *> children;

    TreeNode(T data) { this->data = data; }

    ~TreeNode()
    {
        for (int i = 0; i < children.size(); i++)
        {
            delete children[i];
        }
    }
};

void printTree(TreeNode<int> *root)
{
    if (root == NULL)
    {
        cout << "Empty Tree" << endl;
    }
    cout << root->data << " ";
    for (int i = 0; i < root->children.size(); i++)
    {
        printTree(root->children[i]);
    }
}

void deleteTree(TreeNode<int> *root)
{
    for (int i = 0; i < root->children.size(); i++)
    {
        deleteTree(root->children[i]);
    }
    delete root;
}
