#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

// Recursive
bool isSameTree(struct TreeNode* p, struct TreeNode* q){
    if(p == NULL && q == NULL) {
        return true;
    }

    if((p != NULL && q != NULL) && (p -> val == q -> val)) {
        // To left node and right node
        return isSameTree(p -> left, q -> left) && isSameTree(p -> right, q -> right);
    }

    return false;
}