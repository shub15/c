#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct Node* copyTree(struct Node* root) {
    if (root == NULL) return NULL;

    struct Node* newNode = createNode(root->data);
    newNode->left = copyTree(root->left);
    newNode->right = copyTree(root->right);

    return newNode;
}

struct Node* mirrorTree(struct Node* root) {
    if (root == NULL) return NULL;

    struct Node* newNode = createNode(root->data);
    newNode->left = mirrorTree(root->right);
    newNode->right = mirrorTree(root->left);

    return newNode;
}

int countNodes(struct Node* root) {
    if (root == NULL) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

int height(struct Node* root) {
    if (root == NULL) return 0;
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;
}

int search(struct Node* root, int key) {
    if (root == NULL) return 0;
    if (root->data == key) return 1;
    return search(root->left, key) || search(root->right, key);
}

void inOrder(struct Node* root) {
    if (root == NULL) return;
    inOrder(root->left);
    printf("%d ", root->data);
    inOrder(root->right);
}

int main() {
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    printf("Original Tree (In-order Traversal): ");
    inOrder(root);
    printf("\n");

    struct Node* copiedTree = copyTree(root);
    printf("Copied Tree (In-order Traversal): ");
    inOrder(copiedTree);
    printf("\n");

    struct Node* mirroredTree = mirrorTree(root);
    printf("Mirrored Tree (In-order Traversal): ");
    inOrder(mirroredTree);
    printf("\n");

    int nodeCount = countNodes(root);
    printf("Number of nodes in the original tree: %d\n", nodeCount);

    int treeHeight = height(root);
    printf("Height of the original tree: %d\n", treeHeight);

    int key = 5;
    if (search(root, key)) {
        printf("Node with value %d found in the tree.\n", key);
    } else {
        printf("Node with value %d not found in the tree.\n", key);
    }

    return 0;
}
