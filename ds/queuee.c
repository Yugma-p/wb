#include <stdio.h>
#include <stdlib.h>
void enqueue();
void dequeue();
void show();
int queue[1000];
int Rear = - 1;
int Front = - 1;
int n;
int main()
{
    int ch;
    printf("Enter the size of Queue :");
    scanf("%d",&n);
    while (1)
    {
        printf("\n\nQueue Operations\n");
        printf("1.Enqueue Operation\n");
        printf("2.Dequeue Operation\n");
        printf("3.Display the Queue\n");
        printf("4.Exit\n");
        printf("\nEnter your choice of operations : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            show();
            break;
            case 4:
            exit(0);
            default:
            printf("Incorrect choice \n");
        } 
    }
    return 0;
} 
 
void enqueue()
{
    int item;
    if (Rear == n - 1)
       printf("Overflow \n");
    else
    {
        if (Front == - 1)
      
        Front = 0;
        printf("Element to be inserted in the Queue : ");
        scanf("%d", &item);
        Rear = Rear + 1;
        queue[Rear] = item;
    }
} 
 
void dequeue()
{
    if (Front == - 1 || Front > Rear)
    {
        printf("Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from the Queue: %d\n", queue[Front]);
        Front = Front + 1;
    }
} 
 
void show()
{
    
    if (Front == - 1)
        printf("Empty Queue \n");
    else
    {
        printf("Queue: ");
        for (int i = Front; i <= Rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}
