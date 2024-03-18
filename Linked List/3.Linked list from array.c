#include<stdio.h>
#include<stdlib.h>

struct Node *createLinkedList(int array[],int size);//As I write a function after main() fuction.If I write the function before main(),then it is not needed.

struct Node{

    int data;
    struct Node *Next;

};


typedef struct Node node;




    int main(){

    int array[]={0,1,2,3,4,5,6,7,8,9};
    int size=sizeof(array)/sizeof(array[0]);

    node *head;
    head=createLinkedList(array,size);

    node *current;
    current=head;

    while(current !=NULL){
        printf("%d -> ",current->data);
        current=current->Next;
    }

   printf("NULL\n");


     return 0;
    }


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

