#include <stdio.h>
struct node
{
    int val;
    struct node *left, *right;
};
struct node *getNode(int num)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->val = num;
    return new_node;
}
void main()
{
    struct node *head = NULL, *first = NULL, *sec = NULL, *third = NULL;
    first = getNode(1);
    sec = getNode(2);
    third = getNode(3);
    
    first->left = sec;
    first->right = third;
}