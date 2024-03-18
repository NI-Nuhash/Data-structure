#include<stdio.h>
#include<stdlib.h>

struct Node{

    int data;
    struct Node *Next;
};


typedef struct Node node;

node *createNode(int data,node *Next){ //Function for making a node.

    node *newNode=(node*)malloc(sizeof(node)); //Or node *newNode; newNode=(node*) malloc(sizeof(node));

    //Not compulsory but to check if the memory is allocated or not.
    if(newNode==NULL){
        printf("Error!Could not create a node.");
        exit(1);//exit(1) & exit(0) are not same;
    }

    newNode->data=data;
    newNode->Next=Next;

    return newNode;
}


int main(){

    node *node1;

      node1=createNode(10,NULL);//for a single node
      printf("%d -> ",node1->data);


      printf("Null\n");

    return 0;

}
