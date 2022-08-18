#include"0-tree-Boilerplate.h"
using namespace std;
bool fun(Node *root)
{
	if(root==NULL) return true;
	if(root->lc == NULL and root->rc==NULL) return true;
	int sum = 0;
	if(root->lc) sum+=root->lc->data;
	if(root->rc) sum+=root->rc->data;
	bool ct = sum==root->data;
	bool lt = fun(root->lc);
	bool rt = fun(root->rc);
	return ct and lt and rt;
}
int main()
{
	Node *root = buildTree();
	cout<<fun(root);
	return 0;
}