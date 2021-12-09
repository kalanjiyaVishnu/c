#include <stdio.h>
struct Node
{
    int val;
    struct Node *next;
};
struct Node *newNode(int val)
{
    struct Node *node = (struct Node *)(malloc(sizeof(struct Node)));
    node->val = val;
    node->next = NULL;
    return node;
}
struct Node *insertAtEnd(struct Node *node, int val)
{
    if (!node)
    {
        return newNode(val);
    }
    node->next = newNode();
}
void main()
{
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    struct Node *head[n];
    for (i = 0; i < n; i++)
        head[i]->next = NULL;

    for (i = 0; i < m; i++)
    {
        int u, v;
        scanf("%d %d", &u, &v);
        head[u] = insertAtEnd(head[u], v);
        head[v] = insertAtEnd(head[v], u);
    }
    for(i=0;i<
    )
    /*
        0--> 1 2 3
        1--> 1 2 3
        2--> 1
        3--> 1 2
    */
}