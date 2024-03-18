#include<stdio.h>
#define CAPACITY 3

int stack[CAPACITY];
int top=-1;



void push(int x){ //Adding an item to array

    if(top<CAPACITY-1){

    top=top+1;

    stack[top]=x;

    printf("Successfully added item : %d\n",stack[top]);

    }else printf("Exeption! No spaces\n");

}

int pop(){ //Removing an item from array

      if(top>=0){

        int value = stack[top];
         top=top-1;

         return value;
      }

       printf("Exeption! Empty stack\n");
       return -1;
}

int peek(){ //Return an item without removing from array

    if(top>=0) return stack[top];

    printf("Exeption! Empty stack\n");

return -1;
}


int main(){

    peek(); //Stack is empty
    push(10);
    push(20);
    push(30);
    push(40); //Array size : 3.Therefore,40 will not be added.
    printf("Removed item : %d\n",pop());
    push(40); //30 is removed from third index.Now 40 will be added there
    printf("Top of stack : %d\n",peek());

}



