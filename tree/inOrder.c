#include <stdio.h>
#include <stdlib.h>
  
struct node {
    int data;
    struct node *left;
    struct node *right;
};

// INORDER FUNCTION
void inorder(struct node *root) {
    if (root == NULL)
        return;

    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

int main() {

    // ROOT
    struct node *root = (struct node*)malloc(sizeof(struct node));
    root->data = 10;

    // LEFT
    struct node *left = (struct node*)malloc(sizeof(struct node));
    left->data = 20;
    left->left = left->right = NULL;
    root->left = left;

    // RIGHT
    struct node *right = (struct node*)malloc(sizeof(struct node));
    right->data = 30;
    right->left = right->right = NULL;
    root->right = right;

    printf("Inorder Traversal: ");
    inorder(root);

    return 0;
}
