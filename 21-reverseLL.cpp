#include <bits/stdc++.h>
#include "01-ll.cpp.h"
using namespace std;
node *reverse(node *head)
{
    node *p = NULL, *c = head, *n;
    while (c)
    {
        n = c->next;
        c->next = p;
        p = c;
        c = n;
    }
    return p;
}
int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = new node(50);
    print(head);
    cout << endl;
    head = reverse(head);
    print(head);
}