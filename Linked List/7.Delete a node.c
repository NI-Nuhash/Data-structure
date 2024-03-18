#include<stdio.h>
#include<stdlib.h>

struct Node{

    int data;
    struct Node *Next;

};


typedef struct Node node;

 //Take a function for Linked List from array.

struct Node *createLinkedList(int array[],int size){


    node *head=NULL,*temp,*current;



    for(int i=0;i<size;i++){

         temp=(node*)malloc(sizeof(node));

        temp->data=array[i];
        temp->Next=NULL;

        if(head==NULL){
            head=temp;
            current=temp;
        }
        else{
            current->Next=temp;
            current=current->Next; //Or current=temp;
        }
    }

    return head;
 }


 //Take a function to delete first node
 void *deleteFirst(node *head){


    node *temp,*current;

   current=head;
    head=head->Next;


    //free(current);

 }

//Take a function to delete last node
 void *deleteLast(node *head){


    node *temp,*current=head;

    while(current->Next!=NULL){

        temp=current;
        current=current->Next;
    }
    temp->Next=NULL;
    free(current);

 }

 //Take a function to delete Nth (4th) node
 void *deleteNth(node *head,int index){


    node *temp,*current=head;
    int n=0;

    while(n!=(index-1)){

        temp=current;
        current=current->Next;
        n++;
    }
    temp->Next=current->Next;
    free(current);


 }

    int main(){

    int array[]={0,1,2,3,4,5,6,7,8,9};
    int size=sizeof(array)/sizeof(array[0]);

    node *head;
    head=createLinkedList(array,size);

    node *current,*current1,*current2,*current3;
    current=head,current1=head,current2=head,current3=head;

    while(current !=NULL){
        printf("%d -> ",current->data);
        current=current->Next;
    }

    printf("NULL\n\n");


    //After deleting first node

  current1=deleteFirst(current1);

     while(current1 !=NULL){
        printf("%d -> ",current1->data);
        current1=current1->Next;
    }

    printf("NULL\n\n");


    //After deleting last node

    deleteLast(current2);
     while(current2 !=NULL){
        printf("%d -> ",current2->data);
        current2=current2->Next;
    }

    printf("NULL\n\n");

    //After deleting Nth (4th) node

    deleteNth(current3,4);
     while(current3 !=NULL){
        printf("%d -> ",current3->data);
        current3=current3->Next;
    }

    printf("NULL\n\n");


     return 0;
    }



