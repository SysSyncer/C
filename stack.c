#include <stdio.h>
#include <stdlib.h>

int *stack, choice, size, top, n, i;
void push(void);
void pop(void);
void peek(void);
void display(void);

int main()
{
    top = -1;
    printf("Size of stack [MAX:100]: ");
    scanf("%d", &size);
    stack = (int *)malloc(size * sizeof(int));
    printf("*CHOOSE OPTIONS FROM*\n\t 1. PUSH\n\t 2. POP\n\t 3. PEEK\n\t 4. DISPLAY\n\t 5. EXIT");
    do
    {
        printf("\n Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == 5)
        {
            switch (choice)
            {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exit point.//");
                break;
            default:
                printf("Choose a proper option.");
            }
        }
        else
        {
            choice = 4;
        }
    } while (choice != 5);
    free(stack);
    return 0;
}

void push()
{
    if (top < size)
    {
        printf("PUSH ELEMENT: ");
        scanf("%d", &n);
        stack[++top] = n;
        printf("\nTOP ~> %d", top);
    }
    else
        printf("Stack OVERFLOW");
}

void pop()
{
    if (top < 0)
    {
        printf("Stack UNDERFLOW");
    }
    else
    {
        printf("POPPED ELEMENT: %d", stack[top--]);
        printf("\nTOP ~> %d", top);
    }
}

void peek()
{
    if (top > -1)
        printf("\'Top\' is pointing to the element ~> %d", stack[top]);
}

void display()
{
    if (top > -1)
    {
        printf("STACK REPRESENTATION");
        for (i = top; i >= 0; i--)
        {
            printf("\n\t  __");
            printf("\n\t| ");
            printf("%d | ~> %d", stack[i], i);
        }
        printf("\n\t  --");
    }
    else
        printf("Empty stack");
}
