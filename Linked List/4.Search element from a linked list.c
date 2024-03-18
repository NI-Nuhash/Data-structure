#include<stdio.h>

struct Node{

    int data;
    struct Node *link;
};

typedef struct Node node;

node *createLinkedList(int array[],int size){ //From array to linked list

    node *head=NULL,*temp,*current;

    for(int i=0;i<size;i++){

         temp=(node*)malloc(sizeof(node));

        temp->data=array[i];
    temp->link=NULL;

    if(head==NULL){
        head=temp;
        current=temp;
    }else{
    current->link=temp;
    current=temp;
    }
    }
   return head;
}

int searchElement(node *head,int data){ //Searching element from linked list

    int index=0;
    while(head!=NULL){

        if(head->data==data){
            return index;
        }else index++;


        head=head->link;

        if(head==NULL) return -1;
    }
}

int main(){

    int array[]={0,10,20,30,40,50,60,70,80,90},data,index;
    node *head,*current;
    head=createLinkedList(array,(sizeof(array)/sizeof(array[0])));
    current=head;

    while(current!=NULL){
        printf("%d -> ",current->data);
        current=current->link;
    }
    printf("NULL\n");

    scanf("%d",&data);

    index=searchElement(head,data);
    printf("Index of the given data is : %d\n",index);

    return 0;
}
