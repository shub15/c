#include <stdio.h>
#include<stdlib.h>

// Define the structure for the binary tree node
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

// Constructor to create a new node
struct Node* newNode(int val)
{   
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->left = NULL;
    newNode->right= NULL;
    return newNode;
}

// Inorder Traversal: Left, Root, Right
void inorderTraversal(struct Node* root)
{
    if (root == NULL)
    {
        return;
    }

    inorderTraversal(root->left);  // Traverse left subtree
    printf("%d", root->data);     // Visit root
    inorderTraversal(root->right); // Traverse right subtree
}

// Preorder Traversal: Root, Left, Right
void preorderTraversal(struct Node* root)
{
    if (root == NULL)
    {
        return;
    }

    printf("%d", root->data);    // Visit root
    preorderTraversal(root->left);  // Traverse left subtree
    preorderTraversal(root->right); // Traverse right subtree
}

// Postorder Traversal: Left, Right, Root
void postorderTraversal(struct Node* root)
{
    if (root == NULL)
    {
        return;
    }

    postorderTraversal(root->left);  // Traverse left subtree
    postorderTraversal(root->right); // Traverse right subtree
    printf("%d", root->data);       // Visit root
}

int main()
{
    // Creating a simple binary tree:
    //         1
    //        / \ 
    //       2   3
    //      / \ 
    //     4   5

    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    // Inorder Traversal: Left, Root, Right
    printf("Inorder Traversal: \n");
    inorderTraversal(root);

    // Preorder Traversal: Root, Left, Right
    printf("\nPreorder Traversal: \n");
    preorderTraversal(root);

    // Postorder Traversal: Left, Right, Root
    printf("\nPostorder Traversal: \n");
    postorderTraversal(root);

    return 0;
}