#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next, *prev;
    node(int x) : data(x), next(NULL), prev(NULL) {}
};
node *insertBegin(node *head, int x)
{
    node *t = new node(x);
    if (!head)
        return t;
    t->next = head;
    head->prev = t;
    return t;
}
node *insertEnd(node *head, int x)
{
    node *t = new node(x);
    if (!head)
        return t;
    node *e = head;
    while (e->next)
        e = e->next;
    e->next = t;
    t->prev = e;
    return head;
}
node *reverse(node *head)
{
    node *curr = head, *prev;
    while (curr)
    {
        // swap(curr->prev,curr->next)
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;

        curr = curr->prev;
    }
    return prev->prev;
}
void print(node *head)
{
    while (head)
    {
        cout << head->data << '\t';
        head = head->next;
    }
}
int main()
{
    // NULL<-10<=>20<=>30->NULL
    node *head = new node(10);
    node *temp1 = new node(20);
    node *temp2 = new node(30);

    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;

    head = insertBegin(head, 90);
    head = insertEnd(head, 78);
    print(head);
    cout << endl;
    head = reverse(head);
    print(head);
}