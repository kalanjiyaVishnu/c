#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *getNode(int num)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = num;
    new_node->next = NULL;
    return new_node;
}
void insetAtEnd(int num)
{
    struct node *newNode;
    newNode = getNode(num);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        struct node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void display()
{
    struct node *temp = head;
    if (head == NULL)
    {
        printf("List is Empty");
    }
    else
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    free(temp);
}
void insert(struct node **head_ref, int num)
{
    struct node *new_node = getNode(num);
    if (!*head_ref)
    {
        new_node->next = *head_ref;
        (*head_ref) = new_node;
    }
    else
    {
        struct node *last = *head_ref;
        while (last->next != NULL)
        {
            last = last->next;
        }
        last->next = new_node;
    }
}
void rev()
{

    if (!head)
    {
        return;
    }
    else
    {
        struct node *prev = NULL, *curr, *Next;
        curr = Next = head;
        while (curr != NULL)
        {
            Next = Next->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        head = prev;
    }
}
void sort()
{
    struct node *temp = head,
                *next = temp->next;
    int count = 0, swap;
    while (temp != 0)
    {
        temp = temp->next;
        count++;
    }
    for (int i = 1; i < count; i++)
    {
        int flag = 0;
        struct node *temp1 = temp;
        next = temp->next;
        for (int j = 1; j < count - i; j++)
        {
            if (temp1->data > next->data)
            {
                swap = temp->data;
                temp->data = next->data;
                next->data = swap;
                flag = 1;
            }
            temp1 = temp->next;
            next = temp1->next;
        }

        if (flag == 0)
        {
            printf("the list is sorted");
            return;
        }
    }
}

int main()
{

    insetAtEnd(1);
    insetAtEnd(2);
    insert(&head, 3);
    // rev();
    display();

    sort();
    display();

    // if (!0)
    // {
    //     printf("asdf");
    // }
    // else
    //     printf("dsf");
}