#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next, *prev;
} * head, *tail;

struct node *getNode(int num)
{
    struct node *New_node = (struct node *)malloc(sizeof(struct node));
    New_node->data = num;
    New_node->prev = NULL;
    New_node->next = NULL;
    return New_node;
}
void insertAtEnd(int num)
{
    struct node *newNode = getNode(num);
    if (head == NULL)
        head = tail = newNode;
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
    }
}
void displayFromStart(struct node *temp)
{
    // here u hava to acces the data untill the last node so u hav to hav the first node to  last node to hava that data
    //  until there is null
    //  u need the last node that is not NULL
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
void insertAtPos(int data, int pos)
{
    if (head == NULL)
    {
        insertAtEnd(data);
    }
    else
    {
        struct node *newNode = getNode(data);
        int i = 1;
        // 1 2 3 4 5
        // i = 1 pos = 3 temp = 2
        // --> 2 temp 3
        struct node *temp = head, *nextNode;
        while (i < pos - 1) // pos -1 for insert before the position
        {
            i++;
            temp = temp->next;
        }
        // inset after the position because the temp now points that pos
        nextNode = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
        newNode->next = nextNode;
        nextNode->prev = newNode;
    }
}

// pointer some clearence
//   struct node **temp;
// temp = &head;
//    printf("%p %p ", *temp, head);
void deleteAtStart()
{
    if (!head)
    {
        printf("there is no one here");
    }
    else
    {
        struct node *temp = head;
        head = head->next;
        head->prev = NULL;
    }
}
void deleteAtEnd()
{
    if (!head)
    {
        printf("there is no one here");
    }
    else
    {
        struct node *temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        free(temp);
    }
}
void deleteAtPos(int pos)
{
    if (!head)
    {
        printf("head is empty");
        return;
    }
    struct node *temp = head;
    if (pos == 1)
    {
        deleteAtStart();
    }
    else
    {
        int i = 1;
        while (i < pos)
        {
        }
    }
}
void rev()
{
    if (!head)
        return;

    struct node *cur = head, *next;
    while (cur != NULL)
    {
        next = cur->next;
        cur->next = cur->prev;
        cur->prev = next;
        cur = next;
    }
    // finally chanbe the head to tail and tail to head
    cur = tail; //temp = tail
    tail = head;
    head = tail;
}
void insertAtStart(int data)
{
    struct node *newNode = getNode(data);
    newNode->next = head;
    head = newNode;
}
int main()
{
    insertAtEnd(1);
    insertAtEnd(2);
    insertAtEnd(3);
    insertAtStart(4);
    // insertAtEnd(4);
    insertAtPos(4, 2);
    // deleteAtStart();
    // deleteAtEnd();
    // insertAtEnd(55);
    rev();
    displayFromStart(head);

    // pointer some clearence
    // struct node **temp;
    // temp = &head;
    // printf("%p %p ", *temp, head);
    // value stored in the temp and the addres of the head are the same
    //  **temp == *head will give the same value
    // (*head).data will also do the same as the head->data first dereference the addres and then print tha value in that address
}
