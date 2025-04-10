#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

struct Node *createNode(int ele)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = ele;
    temp->next = NULL;
    return temp;
}

void insertNodeinBeg(int ele)
{
    struct Node *newNode = createNode(ele);
    if (head == NULL)
        head = newNode;
    else
    {
        newNode->next = head;
        head->next = newNode;
        head = newNode;
    }
    printf("Node inserted at the beginning!\n");
}

void insertNodeAtEnd(int ele)
{
    struct Node *newNode = createNode(ele);
    if (head == NULL)
        head = newNode;
    else
    {
        struct Node *temp;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next= temp;
    }
    printf("Node inserted at the end!\n");
}

void insertAtAnyPosition(int ele, int pos)
{
    if (head == NULL)
        printf("List is empty!!!\n");

    else if (pos == 1)
    {
        insertNodeinBeg(ele);
    }
    else
    {
        struct Node *newNode = createNode(ele);
        struct Node *temp = head;
        int i = 1;

        while (i < pos-1 && temp->next != head)
        {
            i++;
            temp = temp->next;
        }
        if (temp->next != head && pos>0)
        {
           struct Node* newNode=createNode(ele);
            newNode->next = temp;
            temp->next = newNode;
            printf("Node inserted at position %d!\n", pos);
        }
        else
        {
            printf("Invalid position!\n");
        }
    }
}

void deleteNodeFromBeg()
{
    if (head == NULL)
        printf("List is empty!\n");
    else
    {
        struct Node *temp = head;
        head = head->next;
        if (head != NULL)
            head->next = NULL;
        free(temp);
        printf("Node deleted from the beginning!\n");
    }
}

void deleteNodeFromEnd()
{
    if (head == NULL)
        printf("List is empty!\n");
    else
    {
        struct Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        struct Node *t = temp;
        if (temp->next != NULL)
            temp->next->next = NULL;
        else
            head = NULL;
        free(temp);
        printf("Node deleted from the end!\n");
    }
}

void deleteNodeFromAnyPosition(int pos)
{
    if (head == NULL)
        printf("List is empty!\n");
    else if (pos == 1)
        deleteNodeFromBeg();
    else
    {
        struct Node *temp = head;
        int i = 1;

        while (i < pos-1 && temp != head)
        {
            temp = temp->next;
            i++;
        }
            if (temp->next != head &&pos>0){
                struct Node *t = temp->next; 
                temp->next->next = temp->next;
            free(temp);
            printf("Node deleted from position %d!\n", pos);
        }
        else
        {
            printf("Invalid position!\n");
        }
    }
}



void display()
{
    if (head == NULL)
        printf("List is empty!\n");
    else
    {
        struct Node *temp = head;
        while (temp != head)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}
void search(int target)
{
    if (head == NULL)
        printf("List is empty!!\n");
    else
    {
        struct Node *temp = head;
        while (temp != NULL)
        {
            if (target==temp->data) 
            {
                printf("Found!!\n");
                return;
            }
            temp = temp->next;
        }
        printf("Element Not Found!!!\n");
    }
}

int main()
{
    while (1)
    {
        printf("Circular Single LINKED LIST_\n");
        printf("1. Insert node at the beginning\n");
        printf("2. Insert node at the end\n");
        printf("3. Insert node at any position\n");
        printf("4. Delete node from the beginning\n");
        printf("5. Delete node from the end\n");
        printf("6. Delete node from any position\n");
        printf("7. Display elements\n");
        printf("8. Exit\n");

        int choice, value, pos;
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the value: ");
            scanf("%d", &value);
            insertNodeinBeg(value);
            break;
        case 2:
            printf("Enter the value: ");
            scanf("%d", &value);
            insertNodeAtEnd(value);
            break;
        case 3:
            printf("Enter the value: ");
            scanf("%d", &value);
            printf("Enter the position: ");
            scanf("%d", &pos);
            insertAtAnyPosition(value, pos);
            break;
        case 4:
            deleteNodeFromBeg();
            break;
        case 5:
            deleteNodeFromEnd();
            break;
        case 6:
            printf("Enter the position: ");
            scanf("%d", &pos);
            deleteNodeFromAnyPosition(pos);
            break;
        case 7:
            display();
            break;
        case 8:
            exit(0);
        default:
            printf("Invalid choice!\n");
        }
        printf("\n");
    }
    return 0;
}
