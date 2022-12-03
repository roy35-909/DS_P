/*
    Simanta Kumar Roy
    221-35-909
    roy35-909@diu.edu.bd
 */
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

void main()
{
  struct node
    {
        int num;
        int *ptr;
   };
    typedef struct node NODE;

    NODE *head, *first, *temp = 0;
    int count = 0;
    int choice = 1;

    head  = (NODE *)malloc(sizeof(NODE));
    head->num = -1;
    first = temp = head;

    printf("\n\n######### Enter Data For Your Circular Linked List As Much As you want.#########\n");
    printf("\n********* If you Want to exit give any Char Data as Input *********\n");
    while (choice)
    {

            head  = (NODE *)malloc(sizeof(NODE));
            printf("\nData For Index [%d] =  ",count);

            if(!scanf("%d", &head-> num))
                break;
            temp->ptr = head;
            temp = head;

        fflush(stdin);
        count++;
    }



    temp->ptr = first;





    printf("\n\n\n\n\n \t\t########## Printing Circular Linked List ##########\n\n\n\n\n\n");
    //Reset Value For printing Form First Node
    count =0;
    temp = first;

    while (1)
    {
        printf("\t\t[%d]   Address: %d     Data: %d     Next: %d \n",count,temp,temp->num, temp->ptr);
        count++;
        temp = temp->ptr;
        if(temp->num == -1)
            break;
    }

    printf("\n\n \t\tTotal Number Of Nodes = %d\n", count);
}
