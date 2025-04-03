#include<stdio.h>
#define SIZE 5
int queue[SIZE];
int front= -1, rear = -1;
void enqueue(int value) {
   if (rear == SIZE - 1) {
      printf(" Queue is full \n");
      return;
   }
   if (front == -1) {
   
       front = 0;
       
       queue[++rear] = value;
       
       printf(" Enqueued %d\n", value);
       
       }
   }
   void dequeue () {
      if (front == -1 ||  front > rear ) {
        printf(" Queue is empty.!\n");
        return;
      }
      int removed = queue[front];
      
      printf("Dequeue %d\n",  removed);
      front++; 
      if (front > rear) {
          front = rear = -1;
      }
      printf("\n");
  }
  int main(){
      enqueue(80);
      enqueue(70);
      enqueue(66);
      
      dequeue();
      dequeue();
      dequeue();
      dequeue ();
      
      return 0;
      
 }     
      