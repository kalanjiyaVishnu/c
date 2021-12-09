#include <stdio.h>
#include <stdlib.h>
struct node
{
    int val;
    struct node *left, *right;
};
struct node *newNode(int num)
{
    struct node *new_node = malloc(sizeof(struct node));
    new_node->val = num;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}
struct node *insert(struct node *node, int val)
{
    if (node == NULL)
        return newNode(val);
    if (node->val < val)
    {
        node->left = insert(node->left, val);
    }
    else
        node->right = insert(node->right, val);
    return node;
}
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d \n", root->val);
        inorder(root->right);
    }
}
void main()
{
    struct node *root = NULL;
    root = insert(root, 1);
    insert(root, 2);
    insert(root, 5);
    insert(root, 7);
    insert(root, 4);
    inorder(root);
}