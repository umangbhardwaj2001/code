#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next; // self referencial structure
    Node(int x) : data(x), next(NULL) {}
};
int main()
{
    Node *front = new Node(10);
    front->next = new Node(20);
    front->next->next = new Node(30);
    while (front)
    {
        cout << front->data << " ";
        front = front->next;
    }
    return 0;
}