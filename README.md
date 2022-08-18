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
2. left view 
  > logic is, take a counter and initialise it by 0. then increment counter on every time when it visit that particular level and print node data if level and counter value is equal 

7. child sum property
  > Here base condition is return from leaf node, and logic is, check recursively if left child + right child is equal to parent value 
