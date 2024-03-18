
#include<stdio.h>
#include<stdlib.h>


struct Node{

    int data;
    struct Node *Next;

};


typedef struct Node node;


 //Take a function for Linked List from array.
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


 node *addingFirst(node *head,int data){ //Function to add a node at the beginning

       node *newNode=(node*)malloc(sizeof(node));
       newNode->data=data;
       newNode->Next=head;
       return newNode;
 }


  node *addingNthPos(node *head,int data,int index){ //Function to add a node at the nth (4th) place

       node *newNode=(node*)malloc(sizeof(node)),*current=head,*next;
       newNode->data=data;
       newNode->Next=NULL;

       while(index!=2){
      current=current->Next;
      index--;
       }
       newNode->Next=current->Next;
       current->Next=newNode;

       return head;
 }

 node *addingEnd(node *head,int data){ //Function to add a node at the end

       node *newNode=(node*)malloc(sizeof(node)),*current=head;
       newNode->data=data;
       newNode->Next=NULL;

       while(current!=NULL){

            if(current->Next==NULL){
                    current->Next=newNode;
                    return head;
            }
            else current=current->Next;
       }
 }


    int main(){

    int array[]={0,1,2,3,4,5,6,7,8,9};
    int size=sizeof(array)/sizeof(array[0]);

    node *head;
    head=createLinkedList(array,size);

    node *current=head;

    while(current !=NULL){
        printf("%d -> ",current->data);
        current=current->Next;
    }
    printf("NULL\n\n");

    //After adding a node at the beginning
    node *newLinkedList=addingFirst(head,-1);

    while(newLinkedList !=NULL){
        printf("%d -> ",newLinkedList->data);
        newLinkedList=newLinkedList->Next;
    }

    printf("NULL\n\n");

    //After adding a node at the Nth Position

     node *newLinkedList2=addingNthPos(head,100,4);

    while(newLinkedList2 !=NULL){
        printf("%d -> ",newLinkedList2->data);
        newLinkedList2=newLinkedList2->Next;
    }

     printf("NULL\n\n");

     //After adding a node at the end

     node *newLinkedList3=addingEnd(head,10);

    while(newLinkedList3 !=NULL){
        printf("%d -> ",newLinkedList3->data);
        newLinkedList3=newLinkedList3->Next;
    }

     printf("NULL\n");

     return 0;
    }





