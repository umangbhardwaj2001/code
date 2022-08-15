#include "0-tree-Boilerplate.h"
using namespace std;
int height(Node *root)
{
    if (root == NULL)
        return 0;
    int lh = height(root->lc);
    int rh = height(root->rc);
    return max(lh, rh) + 1;
}
int sum(Node *root)
{
    if (!root)
        return 0;
    int ls = sum(root->lc);
    int rs = sum(root->rc);
    return ls + rs + root->data;
}
int main()
{
    Node *root = buildTree();
    cout << "\nheight : " << height(root);
    cout << "\nsum : " << sum(root);
    return 0;
}