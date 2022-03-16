/*#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left, *right;
};
//     + there is a variable which points to the addres of the root node which itself is not a node
//    []
// [] [] []
struct node *getNode(int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->left = new_node->right = NULL;
    return new_node;
}
struct node *insert(struct node *rootRef, int data)
{
    struct node *new_node = getNode(data);
    if (rootRef == NULL)
    {
        rootRef = new_node;
    }
    else if (rootRef->data > data)
    {
        rootRef->left = insert(rootRef->left, data);
    }
    else
        rootRef->right = insert(rootRef->right, data);
    return rootRef;
}
void preorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    printf("%d ", root->data);
    preorder(root->left);

    preorder(root->right);
}
int search(struct node *root, int num)
{
    if (root == NULL)
        return -1;
    if (root->data == num)
    {
        return 1;
    }
    if (root->data > num)
        return search(root->left, num);
    return search(root->right, num);
}
int getMin(struct node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    if (root->left == NULL)
    {
        return root->data;
    }
    return getMin(root->left);
}
int getHeight(struct node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    int left_height = getHeight(root->left);
    int right_height = getHeight(root->right);
    if (left_height > right_height)
    {
        return left_height + 1;
    }
    return right_height + 1;
}
void main()
{
    struct node *root = NULL;
    root = insert(root, 16);
    root = insert(root, 1);
    root = insert(root, 19);
    root = insert(root, 4);
    root = insert(root, 6);
    // preorder(root);
    int res = search(root, 10);
    int min = getMin(root);
    int height = getHeight(root);
    printf("%d", height);
}
*/

// C program to find sum of all paths from root to leaves
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};
//     + there is a variable which points to the addres of the root node which itself is not a node
//    []
// [] [] []
struct node *getNode(int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->left = new_node->right = NULL;
    return new_node;
}
struct node *insert(struct node *rootRef, int data)
{
    struct node *new_node = getNode(data);
    if (rootRef == NULL)
    {
        rootRef = new_node;
    }
    else if (rootRef->data > data)
    {
        rootRef->left = insert(rootRef->left, data);
    }
    else
        rootRef->right = insert(rootRef->right, data);
    return rootRef;
}
void preorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    printf("%d ", root->data);
    preorder(root->left);

    preorder(root->right);
}

// Returns sum of all root to leaf paths. The first parameter is root
// of current subtree, the second parameter is value of the number formed
// by nodes from root to this node
int treePathsSumUtil(struct node *root, int val)
{
    // Base case
    if (root == NULL)
        return 0;

    // Update val
    val = (val * 10 + root->data);

    // if current node is leaf, return the current value of val
    if (root->left == NULL && root->right == NULL)
        return val;

    // recur sum of values for left and right subtree
    return treePathsSumUtil(root->left, val) +
           treePathsSumUtil(root->right, val);
}

// A wrapper function over treePathsSumUtil()
int treePathsSum(struct node *root)
{
    // Pass the initial value as 0 as there is nothing above root
    return treePathsSumUtil(root, 0);
}

// Driver function to test the above functions
int main()
{
    struct node *root = NULL;
    char *str[20];
    scanf("%[^\n]%*c", str);
    // printf("%c", *(str + 0));
    int i = 0, temp = 0;
    while (*(str+i) != '\0' && *(str+i) != 'N')
    {
    // temp = str[i];
    // printf("%d", temp);
    root = insert(root, *(str + i));
    i++;
    }

    // root->left     = newNode(3);
    // root->right     = newNode(5);
    // root->left->left = newNode(2);
    // root->left->right = newNode(5);
    // root->right->right = newNode(4);
    // root->left->right->left = newNode(7);
    // root->left->right->right = newNode(4);
    preorder(root);
    // printf("%d", treePathsSum(root));
    return 0;
}
