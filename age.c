#include <stdio.h>
int main()
{
    int age;
    printf("enter your age:");
    scanf("%d",&age);

    if (age>=18)
    {
        printf("Adult\nYou can vote\nYou can drive\n");
    }
    else if(age>=13 && age<18)
    {
        printf("Teenager");
    }
    else
    {
        printf("Child");
    }
    printf("THANK YOU!!");
}