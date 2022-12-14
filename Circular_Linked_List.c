/*
    Simanta Kumar Roy
    221-35-909
    roy35-909@diu.edu.bd

    Ques:Create a circular linked list with a Sentinel, ,Delete Second element
         from this linked list and print all elements.To create and print the
         Linked list, using a loop is mandatory.


 */
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

void main()
{
  struct node
    {
        int num;
        int pos;
        int *ptr;
   };
    typedef struct node NODE;

    NODE *head, *first, *temp = 0;
    int count = 0;
    int choice = 1;

    head  = (NODE *)malloc(sizeof(NODE));
    head->num = -1;
    head->pos = count;
    first = temp = head;

    printf("\n\n######### Enter Data For Your Circular Linked List As Much As you want.#########\n");
    printf("\n********* If you Want to exit give any Char Data as Input *********\n");
    while (choice)
    {
            count++;
            head  = (NODE *)malloc(sizeof(NODE));
            printf("\nData For Index [%d] =  ",count);

            if(!scanf("%d", &head-> num))
                break;
            head->pos = count;
            temp->ptr = head;
            temp = head;

            fflush(stdin);

    }



    temp->ptr = first;





    printf("\n\n\n\n\n \t\t########## Printing Circular Linked List ##########\n\n\n\n\n\n");
    //Reset Value For printing Form First Node

    temp = first;

    while (1)
    {
        printf("\t\t[%d]   Address: %d     Data: %d     Next: %d \n",temp->pos,temp,temp->num, temp->ptr);

        temp = temp->ptr;
        if(temp->num == -1)
            break;
    }


    printf("\n\n\n \t\t########## Deleted 2nd Element From Circular Linked List ##########\n\n");

    temp = first;
    NODE *temp0;
    while(1)
    {

        if(temp->pos == 2)
        {
            temp0->ptr = temp->ptr;
            break;
        }

        temp0 = temp;
        temp = temp->ptr;

    }
    printf("\n\n\n \t\t########## Printing Circular Linked List ##########\n\n\n\n\n\n");

    temp = first;

    while (1)
    {
        printf("\t\t[%d]   Address: %d     Data: %d     Next: %d \n",temp->pos,temp,temp->num, temp->ptr);

        temp = temp->ptr;
        if(temp->num == -1)
            break;
    }

}
