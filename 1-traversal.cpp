#include <queue>
#include <stack>
#include "0-tree-Boilerplate.h"
using namespace std;
// BFS
void levelOrder(Node *root)
{
    Node *curr = root;
    if (curr == NULL)
        return;
    queue<Node *> q;
    q.push(curr);
    while (q.empty() == false)
    {
        Node *temp = q.front();
        q.pop();
        cout << temp->data << ' ';
        if (temp->lc)
            q.push(temp->lc);
        if (temp->rc)
            q.push(temp->rc);
    }
}
// DFS
void inOrder(Node *root)
{
    if (root == NULL)
        return;
    stack<Node *> s;
    Node *curr = root;
    while (curr or s.empty() == false)
    {
        while (curr)
        {
            s.push(curr);
            curr = curr->lc;
        }
        curr = s.top();
        s.pop();
        cout << curr->data << ' ';
        curr = curr->rc;
    }
}
void preOrder(Node *root)
{
    if (root == NULL)
        return;
    stack<Node *> s;
    Node *curr = root;
    while (curr or s.empty() == false)
    {
        while (curr)
        {
            cout << curr->data << ' ';
            s.push(curr);
            curr = curr->lc;
        }
        curr = s.top();
        s.pop();
        curr = curr->rc;
    }
}
// void postOrder(Node *root)
// {
// }
int main()
{
    // 10 8 6 -1 -1 5 -1 -1 7 -1 4 3 -1 -1 -1
    Node *root = buildTree();
    levelOrder(root);
    cout << endl;
    inOrder(root);
    cout << endl;
    preOrder(root);
    cout << endl;
    // postOrder(root);
}