#include<stdio.h>

int deletenumber(int number[],int n)
{
  if(n==0)
  {
      printf("Sorry! No number is left to delete.");
      return n;
  }
  else
  {
      printf("The last number you have entered %d is deleted successfully.\n", number[n-1]);
      return n;
  }
}

void show(int number[],int n)
{
   if(n==0)
   {
       printf("Oops! No number is left to show here.");
   }
   
   else
   {
       printf("\n-----------------------------\n"); 
       printf("\nYou updated entries are:\n\n");
        for (int i = 0; i < n; i++)
        {
            printf("Number %d: %d\n", i + 1, number[i]);
        }
         printf("\n-----------------------------\n");
   }
}

int insertprogram(int number[],int n)

{
    if (n >= 5)
    {
        printf("Sorry! Array is full. Cannot insert more numbers.\n");
        return n; 
    }
     else
    {
        printf("\nEnter new number: ");
        scanf("%d", &number[n]);
        n++; 
        printf("\nNumber inserted successfully.\n");
        return n; 
    }
}


void exitprogram()
{
      printf("\nYou have exited successfully...\n");
}

int main()
{
    int choice;
    int number[5];
    int n=5;

    printf("\nEnter any 5 numbers according to your choice.\n\n");
    
    for(int i=0;i<5;i++)
    {

        printf("Please enter number %d: ", i + 1);
        scanf("%d",&number[i]);
    }

    while(1)  
  {
    printf("\n===== Menu =====\n");
    printf("\n1. Delete a number \n2. View numbers \n3. Insert a new choice \n4. Exit");
    printf("\n\n================\n\n");
    printf("Please select an option (1-4): ");
    scanf("%d",&choice);

    if(choice==1)
    {
        n = deletenumber(number, n);
        if(n>0)
        n--;
    }

    else if(choice==2)
    {
        show(number,n);
    }

    else if(choice==3)
    {
        n = insertprogram(number, n);
        
    }
    
    else if(choice==4)
    {
      exitprogram();
      break;
    } 
    
    else
    {
        printf("\nInvalid choice. Please try again and insert a valid choice(i.e. 1,2,3,4).");
    }

  }
  
}