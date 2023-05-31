#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *start = NULL;
struct node *getnode()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the data:");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    return newnode;
}
int countnode(struct node *ptr)
{
    int count = 0;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    return 0;
}
void createlist(int n)
{
    int i;
    struct node *newnode;
    struct node *temp;
    for (i = 0; i < n; i++)
    {
        newnode = getnode();
        if (start == NULL)
        {
            start = newnode;
        }
        else
        {
            temp = start;
            while (temp != NULL)
                temp = temp->next;
            temp->next = newnode;
        }
    }
}
void traverse()
{
    struct node *temp;
    temp = start;
    printf("the contents of list:");
    if (start == NULL)
    {
        printf("list is empty");
    }
    else
    {
        while (temp != 0)
        {
            printf("%d", temp->data);
            temp = temp->next;
        }
    }
}
void insert_at_beg()
{
    struct node *newnode;
    newnode = getnode();
    if (start == NULL)
    {
        start = newnode;
    }
    else
    {
        newnode->next = start;
        start = newnode;
    }
}
void insert_at_end()
{
    struct node *newnode;
    struct node *temp;
    if (start == NULL)
    {
        start = newnode;
    }
    else
    {
        temp = start;
        while (temp != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

int main()
{
    createlist(5);
    getnode();
    insert_at_beg();
    insert_at_end();
    traverse();
    return 0;
}
