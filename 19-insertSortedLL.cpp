#include <bits/stdc++.h>
#include "01-ll.cpp.h"
using namespace std;
node *insert(node *head, int data)
{
    node *temp = new node(data);
    node *curr = head, *p = NULL;
    if (curr == NULL)
        return temp;
    while (curr and curr->data <= temp->data)
    {
        p = curr;
        curr = curr->next;
    }
    // 1st position
    if (p == NULL)
    {
        temp->next = head;
        return temp;
    }
    temp->next = p->next;
    p->next = temp;
    return head;
}
int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = new node(50);
    head = insert(head, 55);
    print(head);
    return 0;
}