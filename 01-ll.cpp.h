#include <cstddef>
struct node
{
    int data;
    node *next;
    node(int x) : data(x), next(NULL) {}
};
node *insertBegin(node *head, int x)
{
    node *temp = new node(x);
    temp->next = head;
    head = temp;
    return head;
}
node *insertEnd(node *head, int x)
{
    node *temp = new node(x);
    if (head == NULL)
        return temp;
    node *curr = head;
    while (curr->next)
        curr = curr->next;
    curr->next = temp;
    return head;
}
node *delLast(node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
        return NULL;
    node *curr = head;
    while (curr->next->next)
        curr = curr->next;
    delete curr->next;
    curr->next = NULL;
    return head;
}

void dispPos(node *head, int pos)
{
    for (int i = 0; i < pos - 1; i++)
        head = head->next;
    cout << head->data;
}

node *insertPos(node *head, int x, int pos)
{

    node *temp = new node(x);
    if (pos == 1)
    {
        temp->next = head;
        return temp;
    }
    node *curr = head;
    for (int i = 0; curr != NULL and i < pos - 2; i++)
        curr = curr->next;
    if (curr == NULL)
        return head;
    temp->next = curr->next;
    curr->next = temp;
    return head;
}