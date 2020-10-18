#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};






void addition_at_beginning(struct Node *head)
{
    struct Node *temp;

    temp = (struct node*)malloc(sizeof(struct Node));
    printf("Enter the data");
    scanf("%d",&temp->data);
    temp->next = head;
}

int main()
{
    struct Node *head;
    int choice=1;
    head = (struct node*)malloc(sizeof(struct Node));
    while(choice!=0){

    addition_at_beginning(head);
    printf("Do you want to continue(0/1)?");
    scanf("%d",&choice);
    }




    return 0;
}






