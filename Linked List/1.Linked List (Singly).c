#include<stdio.h>
#include<stdlib.h>


struct Node{

    int data;
    struct Node *Next;

};


int main(){

    typedef struct Node node; //For using just node instead of struct Node.

    node *a=NULL;
    node *b=NULL;
    node *c=NULL;   //For three nodes.Nodes can be more.

    a=(node*)malloc(sizeof(node));
    b=(node*)malloc(sizeof(node));
    c=(node*)malloc(sizeof(node));

    a->data=10;
    b->data=20;
    c->data=30;
    a->Next=b;
    b->Next=c;
    c->Next=NULL;

    printf("%d\n",a->Next);
    //Traverse a linked list.
    while(a!=NULL){
        printf("%d -> ",a->data);
        a=a->Next;
    }

}
