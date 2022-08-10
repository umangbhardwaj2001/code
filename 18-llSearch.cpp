#include <bits/stdc++.h>
#include "01-ll.cpp.h"
using namespace std;
// struct node
// {
//     int data;
//     node *next;
//     node(int x) : data(x), next(NULL) {}
// };
// iterative  time:o(n) auxillary space:o(1)
int Isearch(node *head, int target)
{
    int pos = 1;
    while (head)
    {
        if (head->data == target)
            return pos;
        pos++;
        head = head->next;
    }
    return -1;
}
// recursive  time:o(n) auxillary space:o(n) call stack
int Rsearch(node *head, int target)
{
    if (head == NULL)
        return -1;
    if (head->data == target)
        return 1;

    int pos = Rsearch(head->next, target);
    if (pos == -1)
        return -1;
    else
        return pos + 1;

    // return Rsearch(head->next, target) == -1 ? -1 : Rsearch(head->next, target) + 1;
}
int main()
{
    // 20->10->30
    node *head = new node(20);
    head->next = new node(10);
    head->next->next = new node(30);
    head = insertBegin(head, 40);
    head = insertEnd(head, 60);
    int pos = Rsearch(head, 60);
    cout << pos;
    return 0;
}