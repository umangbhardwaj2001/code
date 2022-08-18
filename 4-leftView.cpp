#include "0-tree-Boilerplate.h"
#include<queue>
using namespace std;
void leftViewR(Node *root,int level)
{
	static int counter = 0;
	if(root==NULL) return;
	if(counter == level)
	{
		cout<<root->data<<' ';
		counter++;
	}
	leftViewR(root->lc,level+1);
	leftViewR(root->rc,level+1);
}
void leftViewI(Node *root)
{
	queue<Node *> q;
	Node *curr = root;
	q.push(curr);
	while(q.empty()==false)
	{
		int count = q.size();
		for(int i = 0;i<count;i++)
		{
			Node *temp = q.front();
			q.pop();
			if(i==count-1)cout<<temp->data<<' ';
			if(temp->lc) q.push(temp->lc);
			if(temp->rc) q.push(temp->rc);
		}
	}
}
int main()
{
	Node *root = buildTree();
	// leftViewR(root,0);
	leftViewI(root);
	return 0;
}