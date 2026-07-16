#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};


int findMin(struct node* root) {

      if (root == NULL) {
        printf("Tree is empty\n");
        return -1;
    }

    while (root->left != NULL) {
        root = root->left;
    }

    return root->data;
}

int main() {

   
    struct node* root = (struct node*)malloc(sizeof(struct node));
    struct node* n1 = (struct node*)malloc(sizeof(struct node));   
    struct node* n2 = (struct node*)malloc(sizeof(struct node));
    struct node* n3 = (struct node*)malloc(sizeof(struct node));
  
    root->data = 10;
     n1->data = 5;
     n2->data = 20;
     n3->data = 2;

    
    root->left = n1;
    root->right = n2;
    n1->left = n3;
    n1->right = NULL;
    n2->left = n2->right = NULL;
    n3->left = n3->right = NULL;

    int min = findMin(root);
    printf("Minimum value: %d", min);

    return 0;
}
