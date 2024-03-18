#include<stdio.h>
#include<stdbool.h>

 #define CAPACITY 5


 int ourQueue[CAPACITY];
 int front=0,rear=-1,totalItem=0;

 bool isFull(){

     if(totalItem==CAPACITY){

        return true;
     }

     return false;

 }

 bool isEmpty(){

     if(totalItem==0) return true;


     return false;

 }

 void Enqueue(int item){   //Adding an item in Queue


     if(isFull()){
        printf("Sorry! The Queue is full.\n");
        return;
     }

     rear=(rear+1)%CAPACITY;
     ourQueue[rear]=item;
     totalItem++;

 }


 int Dequeue(){  //Removing an item from Queue


     if(isEmpty()){
        printf("Sorry! The Queue is empty.\n");
        return -1;
     }

     int frontItem=ourQueue[front];
     ourQueue[front]=-1;
     front=(front+1)%CAPACITY;
     totalItem--;
     return frontItem;
 }

 void printQueue(){

      printf("Queue : ");

      for(int i=0;i<CAPACITY;i++){

        printf("%d ",ourQueue[i]);
      }
     printf("\n");
 }

 int main(){


        Enqueue(10);
        Enqueue(20);
        Enqueue(30);
        Enqueue(40);
        printQueue();
        Enqueue(50);
        printQueue();
        Enqueue(60);
        printf("Dequeue : %d\n",Dequeue());
        printQueue();
        Enqueue(60);
        printQueue();

          return 0;
 }




