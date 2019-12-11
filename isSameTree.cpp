#include <iostream>
#include <stack>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        stack<TreeNode*> p_stack;
        stack<TreeNode*> q_stack;
        while(p != nullptr  || q != nullptr || !p_stack.empty() || !q_stack.empty()){
            if(p != nullptr && q != nullptr){
                if(p->val != q->val){
                    return false;
                }
                else{
                    p_stack.push(p);
                    p = p->left;
                    q_stack.push(q);
                    q = q->left;
                }
            }
            else if(p == nullptr  && q == nullptr){
                p = p_stack.top();
                p_stack.pop();
                p = p->right;
                q = q_stack.top();
                q_stack.pop();
                q = q->right;
                
            }
            else{
                return false;
            }
        }
        return true;
        
    }
};