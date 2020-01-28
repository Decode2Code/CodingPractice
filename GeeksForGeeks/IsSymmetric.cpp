/*
* This is the code submitted on GFG
* The driver code for this was pre written. You can find problem at below link
* https://practice.geeksforgeeks.org/problems/symmetric-tree/1
* Is Symmetric tree
*/


/*Structure of the node of the tree is as
struct Node
{
	int key;
	struct Node* left, *right;
};
*/
// complete this function
// return true/false if the is Symmetric or not

bool isSymmetric_util(Node *r1, Node *r2)
{
    //Your Code here
    if(r1==NULL && r2==NULL){
        return true;
    }
    if(r1==NULL || r2==NULL){
        return false;
    }
    if(r1->key != r2->key){
        return false;
    }
    return isSymmetric_util(r1->left, r2->right) && isSymmetric_util(r1->right, r2->left);
}

bool isSymmetric(struct Node* root)
{
    return isSymmetric_util(root, root);
	// Code here
}
