#include <iostream>
struct Node
{
    int data;
    Node *lc, *rc;
    Node(int d) : data(d), lc(NULL), rc(NULL) {}
};
Node *createNode()
{
    int d;
    std::cin >> d;
    if (d == -1)
        return NULL;
    Node *root = new Node(d);
    root->lc = createNode();
    root->rc = createNode();
    return root;
}