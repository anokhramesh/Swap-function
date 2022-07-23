// Swap function using call by reference
#include <stdio.h>
void swap(int*,int*);//function declaration
int main()
{
    int a,b;
    printf("Enter the value of a ");
    scanf("%d",&a);
    printf("Enter the value of b ");
    scanf("%d",&b);
    printf("\nBefore swap-Value of a =%d",a);// display the values of a before swap.
    printf(" and b =%d\n",b);// display the values of b before swap.
    swap(&a,&b);// calling the swap function and pass the address of variable a and b
    printf("\nAfter swap-Value of a =%d",a);// display the values of a After swap.
    printf(" and b =%d\n",b);// display the values of b After swap.
}
void swap(int *x,int *y)//function definition
{
    int temp =*x;//create a new variable temp and move the value of x to temp
    *x =*y;//move the value of y to x
    *y = temp;//move the value of temp to y
    printf("\nSwap function completed successfully:\n");
}
