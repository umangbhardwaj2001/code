# Important coding problem

0. Tree boilerplate
   >
1. Traversal
   - BFS [ level order ]
     > In BFS use queue, print the front element from queue and pop it after printing then push its left and right child if present.
   - DFS [ inorder, preorder, postorder ]
     > - inorder : push curr element into stack and go to the leftmost element, when curr is NULL pop recently pushed element and make it curr then print curr and point curr to `curr->rightChild`
     > - preorder : push curr element into stack print it and go to the leftmost element, when curr is NULL pop recently pushed element and make it curr then point curr to `curr->rightChild`
     > - postorder : akad bakad bambe bo
