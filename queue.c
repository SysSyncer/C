#include <stdio.h>
#include <stdlib.h>
int *queue, choice, size, num, i;

int front=-1;
int rear=-1;

void enqueue(void);
void dequeue(void);
void reset(void);
void display(void);
void help(void);

int main() {
    printf("Size of QUEUE [MAX:100]: ");
    scanf("%d", &size);
    queue = (int*)malloc(size*sizeof(int));
    printf("*CHOOSE OPTIONS FROM*\n\t 1.ENQUEUE\n\t 2.DEQUEUE\n\t 3.RESET\n\t 4.DISPLAY\n\t 5.EXIT");
    do {
        printf("\n Enter your choice: ");
        scanf("%d", &choice);
        if(choice==1 || choice ==2 || choice==3 || choice==4) {
            switch (choice) {
                case 1:
                    enqueue();
                    break;
                case 2:
                    dequeue();
                    break;
                case 3:
                    reset();
                    break;
                case 4:
                    display();
                    break;
                case 5:
                    printf("Exit point//");
                    break;
            }
        } else {
            choice=5;
        }
    }while(choice!=5);
    free(queue);
    return 0;
}

void enqueue() {
    if(rear==size-1) {
       printf("\t\t\tQUEUE is full\n");
    } else {
        printf("Insert element: ");
        scanf("%d", &num);
        rear++;
        queue[rear] = num;
    }
    if(front==-1) {
        front=0;
    }
}

void dequeue() {
    if(front==-1 || front>rear) {
        printf("\t\t\tQueue is empty\n");
    } else {
        int removedElement = queue[rear];
        printf("Removed element: %d", queue[front]);
        front++;
    }
}

void reset() {
    front=-1;
    rear=-1;
    printf("QUEUE RESETTED");
}

void display() {
    if(front==-1 || front>rear){
        printf("\t\t\tEMPTY QUEUE\n");
    } else {
        for(i=rear; i>=front; i--) {
            printf("|%d|~>", queue[i]);
            if(i==front) printf("::|COUNTER|");
        }
    }
}
