#include<stdio.h>


struct Node{

    int data;
    struct Node *next;

};

typedef struct Node node;

//Inserting value : 20,30,40,50

node *addNode(int Data,node *head){
    node *current,*temp;

    temp=malloc(sizeof(node));

       temp->data=Data;
       temp->next=NULL;

       if(head==NULL){
        head=temp;
        current=temp;
       }
       else{
        current->next=temp;
        current=current->next;
       }

       return head;
}

int main(){

   node *head=NULL;
    //int data;

    node *temp=addNode(20,head);
    head=temp;
    temp=addNode(30,head);
    temp=addNode(40,head);
    temp=addNode(50,head);

      while(temp!=NULL){
            printf("%d -> ",temp->data);
        temp=temp->next;
    }
     printf("NULL\n");


    //Adding 10 at beginning

    node *zero=malloc(sizeof(node));

    zero->data=10;
    zero->next=head;
    head=zero;

     while(zero!=NULL){
            printf("%d -> ",zero->data);
        zero=zero->next;
    }

      printf("NULL\n");

    //Adding 60 at the end

    node *last=malloc(sizeof(node));

    last->data=60;
    last->next=NULL;

   zero=head;
    while(zero!=NULL){
            if(zero->next==NULL){
                zero->next=last;
                break;
            }
        zero=zero->next;
    }
zero=head;
    while(zero!=NULL){
            printf("%d -> ",zero->data);
        zero=zero->next;
    }

      printf("NULL\n");



    //Finding the index of 30

    zero=head;
    int count=0;
    while(zero!=NULL){
        if(zero->data==30){
                printf("Index : %d\n",count);
                break;
        }
        zero=zero->next;
        count++;
    }


    //Deleting 4th node

    int index=0;
    temp=head;

    while(temp!=NULL){
        if(index==3){
            node *prev=temp;
            node *mid=temp->next;
            node *Last=mid->next;

            prev->next=Last;
            break;
        }

        temp=temp->next;
        index++;

    }

    zero=head;

    while(zero!=NULL){
            printf("%d -> ",zero->data);
        zero=zero->next;
    }

      printf("NULL\n");


}




