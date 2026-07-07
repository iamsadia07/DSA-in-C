#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

int main() {

    // ROOT
    struct node *root = (struct node*)malloc(sizeof(struct node));
    root->data = 10;
    root->left = NULL;
    root->right = NULL;

    // LEFT SUBTREE
    struct node *left = (struct node*)malloc(sizeof(struct node));
    left->data = 20;
    left->left = NULL;
    left->right = NULL;

    root->left = left;   // CONNECT

    // RIGHT SUBTREE
    struct node *right = (struct node*)malloc(sizeof(struct node));
    right->data = 30;
    right->left = NULL;
    right->right = NULL;

    root->right = right;  // CONNECT

    printf("TREE CREATED SUCCESSFULLY\n");

    return 0;
}
