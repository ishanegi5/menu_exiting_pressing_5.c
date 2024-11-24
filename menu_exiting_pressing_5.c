#include<stdio.h>
void addition (int a, int b)
{
int add;
add =a+b;

printf("Addition of first and second number: %d",add);
}
void subtraction(int a,int b)
{
int subtraction=a-b;
printf("Subtraction of second digit from first digit= %d", subtraction);

}
void multiply(int a, int b) 
{int product;
product= a*b;
printf("Multiply of first number and second number is: %d", product);
}
float division(int a, int b)
{float division;
division= (float)a/b;
printf("Division of first number and second number is: %.4f",division);
return 0;
}
int main()
{ int question=0;

int n1,n2;
while(question!=5)
{
printf("Enter n1= ");

scanf("%d",&n1);

printf("Enter n2= ");

scanf("%d", &n2);

printf("Enter any one of the options below: \n 1 for addition.\n 2 for subtraction.\n 3 for multiplication.\n 4 for division.\n");

int option;



printf("Enter your choice: ");

scanf("%d",&option);

if (option>4||option<1)
{
printf("You entered something wrong!\n");
}
else
{
switch (option) 
{ case 1:
addition(n1,n2);

break;

case 2:

subtraction(n1,n2);

break;

case 3:

multiply(n1,n2);

break;
case 4:

division(n1,n2);

break;

default:

printf("Something went wrong!\n");

break;

}

}

printf("\nEnter anything if you want to continue & enter 5 if you want to stop: ");
scanf("%d", &question);

}
printf("\nName: Isha Negi \nRoll number: 24 CE 47\n");
return 0;

}
