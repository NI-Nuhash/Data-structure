#include<stdio.h>
#include<stdlib.h>



struct Node{

    int data;
    struct Node *Next;

};


typedef struct Node node;

struct Node *createLinkedList(int array[],int size){  //I can write struct Node or node as I have used typedef.


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

void *reverseLinkedList(node *head){

     node *prev=NULL,*next=NULL;

     while(head!=NULL){

            next=head->Next;
            head->Next=prev;
            prev=head;
            head=next;
     }

     head=prev;

 }

    int main(){

    int array[]={0,1,2,3,4,5,6,7,8,9};
    int size=sizeof(array)/sizeof(array[0]);

    node *head;
    head=createLinkedList(array,size);

    node *current;
    current=head;

    //Before reversing

    while(current !=NULL){
        printf("%d -> ",current->data);
        current=current->Next;
    }


    printf("NULL\n\n");



    head=reverseLinkedList(head);//Reversed head

      //After reversing

    while(head !=NULL){
        printf("%d -> ",head->data);
        head=head->Next;
    }

     printf("NULL\n");

     return 0;
    }


