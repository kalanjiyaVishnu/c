#include <stdio.h>
struct Node
{
    int n;
    struct Node *next;
};
void print(struct Node *temp)
{
    while (temp != NULL)
    {
        printf("%d", temp->n);
        temp = temp->next;
    }
}
int main()
{
    struct Node *head, *second, *third;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    head->n = 1;
    second->n = 2;
    third->n = 3;

    head->next = second;
    second->next = third;
    third->next = NULL;
    printf("ads");
    print(head);
    return 0;
}