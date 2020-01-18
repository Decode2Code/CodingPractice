/*
* This is the code submitted on GFG
* The driver code for this was pre written. You can find problem at below link
* https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1
* LeftViewOfBinaryTree
*/


//Structure of Tree Node
/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

// A wrapper over leftViewUtil()
int level = -1;
void traversal(Node *root, int node_level){
    if(root==NULL)
        return;
    if(node_level>level){
        cout<<root->data<<" ";
        level = node_level;
    }
    traversal(root->left, node_level+1);
    traversal(root->right, node_level+1);
    
}

void leftView(Node *root)
{
   // Your code here
   level = -1;
   traversal(root, 0);
   
}
