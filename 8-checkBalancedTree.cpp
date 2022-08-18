#include"0-tree-Boilerplate.h"
using namespace std;
int height(Node *root)
{
	if(root == NULL) return 0;
	int lt = height(root->lc);
	int rt = height(root->rc);
	return max(lt,rt)+1;
}
int isBalanced(Node *root)
{
	if(root == NULL) return true;
	int lt = height(root->lc);
	int rt = height(root->rc);
	int diff = abs(lt-rt);
	bool lT = isBalanced(root->lc);
	bool rT = isBalanced(root->rc);
	return diff<=1 and lT and rT;
}
pair<int,bool> fun(Node *root)
{
	if(root==NULL)
		return {0,true};
	pair lt = fun(root->lc);
	pair rt = fun(root->rc);
	bool res = abs(lt.second-rt.second);
	int h = max(lt.first,rt.first)+1;
	return res<=1?make_pair(h,true):make_pair(h,false);

}
int main()
{
	Node *root = buildTree();
	// cout<<isBalanced(root);
	cout<<fun(root).second;

}