#include<stdio.h>
#include<stdlib.h>

struct node{
    int flag;
    int data;
    int *next;
};
struct node *insert(int n,struct node *tail){
     struct node *temp=NULL,*head=NULL;
    struct node *newnode;
    n--;
    while(n--){
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->flag=1;
        printf("Enter data: ");
        scanf("%d",&newnode->data);
        if(head==NULL){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }

    fflush(stdin);
    }


        printf("Hello world");

        printf("\nenter your data: ");

        scanf("%d",&tail->data);
        tail->flag=0;
        tail=head;

    free(temp);
    return tail;
}
void display(int n,struct node *tail){

    struct node *temp;
    temp = tail;
    printf("\n Head Adress is  %d",temp);
   while(1)
   {
       printf("%d %d %d %d",temp,temp->flag,temp->data,temp->next);
       temp = temp->next;
       if(temp == tail)
        break;
   }
    return;
}
int main(){
    int n;
    struct node *tail=NULL,*p;
    printf("Enter number of nodes you want to create: ");
    scanf("%d",&n);
    tail=insert(n,&tail);
    printf("\n Head Adress is  %d",tail);
    display(n,tail);
return 0;
}
