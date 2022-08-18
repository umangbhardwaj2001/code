#include "0-tree-Boilerplate.h"
#include <queue>
using namespace std;
void printNodeAtDistanceKFromNode(Node *root, int k)
{
    if (k == 0)
    {
        cout << root->data << ' ';
        return;
    }
    printNodeAtDistanceKFromNode(root->lc, k - 1);
    printNodeAtDistanceKFromNode(root->rc, k - 1);
}
int size(Node *root)
{
    if (root == NULL)
        return 0;
    int lt = size(root->lc);
    int rt = size(root->rc);
    return lt + rt + 1;
}
int maxInTree(Node *root)
{
    if (root == NULL)
        return 0;
    int lt = maxInTree(root->lc);
    int rt = maxInTree(root->rc);
    return max(lt, max(rt, root->data));
}
int depth(Node *root, int target)
{
    static int d = 0;
    if (root == NULL)
        d = 0;
    if (root->data == target)
        return d;
    d = d + 1;
    int lt = depth(root->lc, target);
    cout << lt << endl;
    int rt = depth(root->rc, target);
    cout << rt << endl;
    d = d - 1;
    return d;
}
int main()
{
    Node *root = buildTree();
    // int k;
    // cin >> k;
    // printNodeAtDistanceKFromNode(root, k);
    // cout << size(root);
    // cout << maxInTree(root);
    cout << depth(root, 3);
    return 0;
}