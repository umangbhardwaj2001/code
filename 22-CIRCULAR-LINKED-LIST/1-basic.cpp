#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x) : data(x), next(NULL){};
};
Node *insertBegining(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
        temp->next = temp;
    else
    {
        Node *curr = head;
        while (curr->next != head)
            curr = curr->next;
        curr->next = temp;
        temp->next = head;
    }
    head = temp;
    return head;
    /*
    another approach o(1) will be insert temp node between head and head->next than swap temp->data and head->data
    */
}
Node *insertEnd(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
        temp->next = temp;
    else
    {
        Node *curr = head;
        while (curr->next != head)
            curr = curr->next;
        curr->next = temp;
        temp->next = head;
    }
    return head;
    /*
    another approach o(1) will be insert temp node between head and head->next than swap temp->data and head->data
    */
}
Node *deleteHead(Node *head)
{
    Node *t = head;
    while (t->next != head)
        t = t->next;
    t->next = head;

    return head;
}
void display1(Node *head)
{
    if (head == NULL)
        return;
    cout << head->data << '\t';
    for (Node *p = head->next; p != head; p = p->next)
        cout << p->data << '\t';
}
void display2(Node *head)
{
    if (head == NULL)
        return;
    Node *p = head;
    do
    {
        cout << p->data << '\t';
        p = p->next;
    } while (p != head);
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = head;
    head = insertBegining(head, 60);
    head = insertEnd(head, 60);
    head = deleteHead(head);
    // display1(head);
    display2(head);

    getchar();
    return 0;
}