//Guessing the correct number
#include<stdio.h>

int main()
{
    
    
    //output
    printf("This is a guessing game.\n");
    printf("I have chosen a number between 0 and 20 which you must guess");
    printf("\n");
    
    printf("You have 5 tries left.\n");
    //Declaring a variable to store the no to be guessed
    int num;
    printf("Enter a guess: ");
    scanf("%d", &num);
    
    //Conditional statement for the first guess
    if (num==2)
    printf("Congratulations. You guessed it!\n");
    else 
    {
    printf("Sorry, %d is wrong.\t", num);
    printf("My number is less than that.\n");
    }
    
    //The second guess
    printf("You have 4 tries left.\n");
    printf("Enter a guess:");
    scanf("%d", &num);
    
    //Conditional statement for the second guess
    if (num==2)
   printf("Congratulations. You guessed it!\n");
    else
    {
    printf("Sorry, %d is wrong.\t", num);
    printf("My number is less than that.\n");
    }
    
    //The third guess
    printf("You have 3 tries left\n");
    printf("Enter a guess: ");
    scanf("%d", &num);
    
    //Conditional statement for the third guess
    if (num==2)
    printf("Congratulations. You guessed it!\n");
    else
    {
     printf("Sorry, %d is wrong.\t", num);
    printf("My number is less than that.\n");
    }
    
    //The fourth guess
    printf("You have 2 tries left.\n");
    printf("Enter a guess:");
    scanf("%d", &num);
    
    //Conditional statement for the fourth guess
    if (num==2)
    printf("Congratulations. You guessed it!\n");
    else
    {
     printf("Sorry, %d is wrong.\t", num);
    printf("My number is less than that.\n");
    }
    
    return 0;
    
    
    
    
    
    
}