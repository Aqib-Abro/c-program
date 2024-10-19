#include <stdio.h>
#include<conio.h>
int main()
{
int number;
int square;
printf("Enter an integer less than 20:");
scanf("%d" , &number);
square = number * number
 if (number < 20 ){
square = number * number;
printf("The square of %d is %d\n",number, square);
} else {
printf("please enter a number less than 20.\n");
}
getch();
}