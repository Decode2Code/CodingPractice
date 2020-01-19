/*
* This is the code submitted on GFG
* The driver code for this was pre written. You can find problem at below link
* https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1
* Height of Binary Tree
*/

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

/* Computes the height of binary tree with given root.  */
int height(Node* node)
{
   // Your code here
   if(node==NULL)
    return 0;
    
    return 1+max(height(node->left), height(node->right));
}


