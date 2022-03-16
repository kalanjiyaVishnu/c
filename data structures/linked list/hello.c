#include <stdio.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *next;
};
struct node *getNode(int num)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = num;
    newNode->next = NULL;
    return newNode;
}
// pointer to pointret
void append(struct node **head_ref, int new_data)
{
    /* 1. allocate node */
    struct node *new_node = (struct node *)malloc(sizeof(struct node));

    struct node *last = *head_ref; /* used in step 5*/

    /* 2. put in the data  */
    new_node->data = new_data;

    /* 3. This new node is going to be the last node, so make next of
          it as NULL*/
    new_node->next = NULL;

    /* 4. If the Linked List is empty, then make the new node as head */
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    /* 5. Else traverse till the last node */
    while (last->next != NULL)
        last = last->next;

    /* 6. Change the next of last node */
    last->next = new_node;
    return;
}
void insertAtStart(struct node **head, int num)
{
    // struct node* temp = head;
    struct node *newNode = getNode(num);
    newNode->next = *head;
    *head = newNode;
}
struct node *insertAtEnd(struct node *head, int num)
{
    struct node *newn = getNode(num);
    struct node *temp = head;
    if (head == NULL)
    {
        head = newn;
        return head;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newn;
    return head;
}
struct node *printNode(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void remove1(struct node **head_ref)
{
    if (!*head_ref)
    {
        return;
    }

    struct node *temp = *head_ref;
    struct node *ans = NULL;
    append(&ans, temp->data);
    int cur = temp->data;
    while (temp)
    {
        if (temp->data != cur)
        {
            cur = temp->data;
            append(&ans, cur);
        }
        temp = temp->next;
    }
    printNode(ans);
}
int main()
{
    struct node *head = NULL;
    head = insertAtEnd(head, 1);
    head = insertAtEnd(head, 1);
    head = insertAtEnd(head, 2);
    head = insertAtEnd(head, 3);
    append(&head, 3);
    // insertAtStart(&head, 1);
    // insertAtStart(&head, 2);
    // insertAtStart(&head, 3);
    remove1(&head);
    printNode(head);
    return 0;
}