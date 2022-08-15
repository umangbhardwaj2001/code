#include <iostream>
struct Node
{
    int data;
    Node *lc, *rc;
    Node(int d) : data(d), lc(NULL), rc(NULL) {}
};
// 10 8 6 -1 -1 5 -1 -1 7 -1 4 3 -1 -1 -1
Node *buildTree()
{
    int d;
    std::cin >> d;
    if (d == -1)
        return NULL;
    Node *root = new Node(d);
    root->lc = buildTree();
    root->rc = buildTree();
    return root;
}