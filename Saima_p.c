#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node{
    int flag;
    int data;
    int *next;
};

struct node *head,*first,*temp = 0;


void insert(int pos,int data)
{
    if(pos == 0){

        temp = first;
        while(1)
        {
            if(temp->next == first)
                break;
            temp = temp->next;

        }


                // Execute When You Want to insert in font.
        head = (struct node*)malloc(sizeof(struct node));
        head->flag = 1;
        first->flag = 0;
        head->data = data;
        head->next = first;
        first = head;
        temp->next = first;

    }
    else{ // 123456
            temp = first;
        for(int i=0;i<pos;i++)
        {
            temp = temp->next;
        }
        if(temp->next == first)
        {
            head = (struct node*)malloc(sizeof(struct node));
            head -> flag = 0;
            head->data = data;
            temp->next = head;
            head->next = first;
        }
        else{
        temp = first;
        for(int i=0;i<pos-1;i++)
        {
            temp = temp->next;
        }
        head = (struct node*)malloc(sizeof(struct node));
        head -> flag = 0;
        head->data = data;
        head->next = temp->next;
        temp->next = head;

        }

    }
}

void display()
{
    temp = first;

    printf("\n Printing The linked List.\n\n");
    while(1)
    {
        printf("\nAdress = %d   Flag = %d   Data =  %d    Next = %d\n",temp,temp->flag,temp->data,temp->next);
        temp = temp->next;
        if(temp->flag ==1)
            break;
    }
}


int main(){

    first = 0;
    printf("Type Any char For Exit . Else Keep Adding number :) :) \n\n");



    while(1)
    {
        head = (struct node *)malloc(sizeof(struct node));
        printf("Insert Data : ");
        if(scanf("%d",&head->data)){
                head->flag = 0;
        }
        else{
            break;
        }


        if(first==0)
        {
            head->flag = 1;
            first = temp = head;
        }
        else{
            temp->next = head;

            temp = head;
        }
        fflush(stdin);


    }

temp->next = first;


//Now You Can Use display(); For printing And insert(pos,data)  For Inserting;
display();
fflush(stdin);
printf("\n\nEnter a [position data] For insertion : ");
int pos,data;
scanf("%d %d",&pos,&data);

insert(pos,data); // Insert Data

display();  // Again Display

return 0;
}
