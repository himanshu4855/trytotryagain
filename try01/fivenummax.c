#include<stdio.h>


int main()
{
    int i, number[5];
    int max, mini;


    for(i = 0; i < 5; i++)
    {
        printf("Enter digit %d: ", i + 1);
        scanf("%d", &number[i]);
    }


    max = number[0];
    mini = number[0];


    for(i = 1; i < 5; i++)
    {
        if(number[i] > max)
        {
            max = number[i];
        }
        else if(number[i] < mini)
        {
            mini = number[i];
        }
    }


    printf("\nMax value is: %d\n", max);
    printf("Minimum value is: %d", mini);


    return 0;
}