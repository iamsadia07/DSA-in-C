#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node* createNode(int data) {                    //using funtion
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// FIND MAX
int findMax(struct node* root) {
    if (root == NULL) return -1;

    while (root->right != NULL) {
        root = root->right;
    }

    return root->data;
}

int main() {

    struct node* root = createNode(10);
    root->left = createNode(5);
    root->right = createNode(20);
    root->right->right = createNode(25);

    int max = findMax(root);
    printf("Maximum value: %d", max);

    return 0;
}
