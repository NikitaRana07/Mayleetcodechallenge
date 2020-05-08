class Solution {
public:
    
        TreeNode *p1, *p2;
    
    void dfs(TreeNode *root, TreeNode *p, int d, int x, int y, int &d1, int &d2){
        if(!root){
            return;
        }
        
        if(root->val == x){
            d1 = d;
            p1 = p;
        }
        else if(root->val == y){
            d2 = d;
            p2 = p;
        }
        else{
            dfs(root->left, root, d+1, x, y, d1, d2);
            dfs(root->right, root, d+1, x, y, d1, d2);
        }
    }
    bool isCousins(TreeNode* root, int x, int y) {
        int d1=-1, d2=-1;
        p1 = NULL;
        p2 = NULL;
        dfs(root, NULL, 0, x, y, d1, d2);
        
        return d1 == d2 && p1 != p2;
    }
    
};
