#include <stdio.h>

int stack[5];
int top = -1;

int delete()
{
    if (top == -1)
    {
        printf("Stack is empty! Nothing to pop.\n");
        return -1;
    }
    else
    {
        int val = stack[top];
        top--;
        printf("%d removed from stack.\n", val);
        return val;
    }
}

void show()
{
    if (top == -1)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("Current stack:\n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

int main()
{
    int i, choice;
    int size = 5;

    printf("Enter %d numbers:\n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &stack[i]);
        top++;
    }

    do
    {
        printf("\n1. Delete\n2. Show\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            delete();
        }
        else if (choice == 2)
        {
            show();
        }
        else if (choice == 3)
        {
            printf("Program ended.\n");
        }
        else
        {
            printf("Invalid choice!\n");
        }

    } while (choice != 3);

    return 0;
}
