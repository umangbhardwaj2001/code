#include <bits/stdc++.h>
#include "01-ll.cpp.h"
using namespace std;
void printFromEnd(node *head, int n)
{
    node *first = head, *second = head;
    for (int i = 0; i < n - 1; i++)
        second = second->next;
    while (second->next)
    {
        first = first->next;
        second = second->next;
    }
    cout << first->data;
}
int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = new node(50);
    printFromEnd(head, 5);
}