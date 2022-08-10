#include <bits/stdc++.h>
using namespace std;
struct myStack
{
    int *arr;
    int cap;
    int top;
    myStack(int capacity) : cap(capacity), arr(new int[capacity]), top(-1){};
    void push(int x)
    {
        arr[++top] = x;
    }
    int pop()
    {
        return arr[top--];
    }
    int peek()
    {
        return arr[top];
    }
    bool isEmpty()
    {
        return (top == -1);
    }
    int size()
    {
        return top + 1;
    }
};
int main()
{
    myStack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.peek() << endl;
    cout << s.size() << endl;
    cout << s.pop() << endl;
    cout << s.size() << endl;
    cout << s.isEmpty() << endl;
    return 0;
}