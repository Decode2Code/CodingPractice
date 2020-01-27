/*
* This is the code submitted on GFG
* The driver code for this was pre written. You can find problem at below link
* https://practice.geeksforgeeks.org/problems/determine-if-two-trees-are-identical/1
* check if trees are identical
*/



/*
//structure of tree node
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

/* Should return true if trees with roots as r1 and 
   r2 are identical */
bool isIdentical(Node *r1, Node *r2)
{
    //Your Code here
    if(r1==NULL && r2==NULL){
        return true;
    }
    if(r1==NULL || r2==NULL){
        return false;
    }
    if(r1->data != r2->data){
        return false;
    }
    return isIdentical(r1->left, r2->left) && isIdentical(r1->right, r2->right);
}
