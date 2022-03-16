#include <stdio.h>
#include <malloc.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = 0;
void printList();
void insertFront();

struct Node *getNode(int data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = 0;
}

void insertFront(int data)
{
    struct Node *newNode = getNode(data);
    if (!head)
    {
        head = newNode;
        return;
    }
    struct Node *tail = head;
    while (tail->next != 0)
    {
        tail = tail->next;
    }
    tail->next = newNode;
}

void printList()
{
    if (!head)
    {
        printf("Empty");
        return;
    }
    struct Node *head_ref = head;
    while (head_ref)
    {
        printf("%d ", head_ref->data);
        head_ref = head_ref->next;
    }
}
void insertBack(struct Node **head_ref, int data)
{
    struct Node *new_node = getNode(data);
    // head_ref points to the address of the head which hold the starting address

    if (!*head_ref)
    {
        // head value is 0 at initial
        new_node->next = *head_ref;
        (*head_ref) = new_node;
        return;
    }
    struct Node *tail = *head_ref; //--> points the address of the head
    while (tail->next != 0)
    {
        tail = tail->next;
    }
    tail->next = new_node;
}
void rev()
{
    if (!head)
    {
        return;
    }
    struct Node *head_ref = head;
    struct Node *prev = 0, *curr = head, *next = 0;
    while (curr)
    {
        next = curr->next;
        curr->next =prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}
int main()
{
    insertFront(1);
    insertFront(2);
    insertFront(3);
    insertBack(&head, 4);
    rev();
    printList();
}