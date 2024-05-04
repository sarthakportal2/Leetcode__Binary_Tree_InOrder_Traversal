class Solution {
public:
//Optimal Approach(New)
//T(C(N))==O(1) and S(C(N)==O(1)) as it requires non memory space allocation recursively
    void Inorder(TreeNode* root,vector<int>&out){//Inorder function declare
        if(!root)return;//Initializing Root
        Inorder(root->left,out);//Left Child Decalre
        out.push_back(root->val);//Root's Val declare
        Inorder(root->right,out);}//Right Child Declare

    vector<int> inorderTraversal(TreeNode* root) {//InorderTraversal funct Declare
        vector<int>out;//Output declare
        Inorder(root,out);//Calling Inorder Funct
        return out;}};//Printing BST's Inorder Travrsal Output

        //Old Approach
        // root->val=inorderTraversal(TreeNode* root);
        // if (root->val==NULL)return 0;
        // if(root->val<root)root->left=inorderTraversal(root->left);//Left Child 
        // root=inorderTraversal(root->val);//Root
        // if(root->val>root)root->right=inorderTraversal(root->right);//Right Child
        // return root;}
