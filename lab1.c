#include <stdio.h>//lab exp 1
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#define MAX_SIZE 100
void insert(int *list, int *size)
{
    int pos, value;
    printf("Enter Position :");
    scanf("%d", &pos);
    pos=pos-1;
    printf("Enter the value :");
    scanf("%d", &value);
    if (pos < 0 || pos > *size)
        printf("Invalid position !!!\n");
    else if(pos == *size){
        list[pos] = value;
        (*size)++;
    }
    else
    {
        for (int i = *size; i >= pos; i--)
        {
            list[i] = list[i - 1];
        }
        list[pos] = value;
        printf("element enter successfully\n");
        *size = *size + 1;
    }
}
void delete(int *list ,int *size)
{
    int pos, value;
    printf("Enter Position :");
    scanf("%d", &pos);
    pos=pos-1;//ub same ho gya
    if (pos < 0 || pos > *size)
        printf("Invalid position !!!\n");
    else if(pos == *size){
        (*size)--;
        printf("Invalid position !!!\n");
    }

    else
    {
        for (int i = pos; i < *size; i++) 
        {
            list[i] = list[i + 1];
        }
        printf("element deleted successfully\n");
        *size = *size - 1;
    }
}
void search(int *list,int *size)
{
    int val,i,flag =0;
    printf("enter searching element: ");
    scanf("%d", &val);
    for(i=0; i<size; i++){
        if(val == list[i]){
            flag=1;
            break;
        }
    }
    if(flag == 1)
        printf("Element found at index %d\n",i);
    else
        printf("Element not found !!!!\n");
}
void displaylist(int *list,int size){
    int i;
    printf("List elements are : \n");
    for (int i = 0; i<size; i++)
    {
        printf("%d ", list[i]);
    }
    printf("\n");
}
int main()
{
    int size;
    int list[MAX_SIZE];
    printf("enter list size :");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &list[i]);
    }
    while (1)
    {
        printf("1. Insertion\n");
        printf("2. Deletion\n");
        printf("3. Searching\n");
        printf("4. Traversing\n");
        printf("5. Exit\n");
        int choice;
        printf("Enter choice :");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert(list,&size);
            break;
        case 2:
            delete(list,&size);
            break;
        case 3:
            search(list,&size);
            break;
        case 4:
        displaylist(list,size);
            break;
        case 5:
            break;
        default:
            printf("Invalid operator !!!!");
        }
        getch();
    }
    return 0;
}
