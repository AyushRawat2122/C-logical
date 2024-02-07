// 1 )
#include <stdio.h>

int main()
{
    int num = 64784;
    int sum = 0 , temp;
    
    while(num>0)
    {
     temp = num % 10 ;
     sum = sum * 10 + temp;
     num = num/10;
    }
    
    printf("%d",sum);

    return 0;
}
// 2 )
#include <stdio.h>

int main()
{
    int num;
    int sum = 0 , temp;
    printf("Enter the number :-");
    scanf("%d",&num);
    int compare = num ;
    
    while(num>0)
    {
     temp = num % 10 ;
     sum = sum * 10 + temp;
     num = num/10;
    }
    if(sum == compare)
    {
        printf("%d is a palindrome no ",sum);  
    }
    else
    {
        printf("%d is not a palindrome no ",sum);  
    }

    return 0;
}
// 3 )
#include <stdio.h>

int main()
{
    int num;
    int sum = 0 , temp;
    printf("Enter the 3 digit number :-");
    scanf("%d",&num);
    int compare = num;
    
    while(num>0)
    {
     temp = num % 10 ;
     sum = sum + (temp*temp*temp);
     num = num/10;
    }
    if(sum == compare)
    {
        printf("%d is a armstrong no ",sum);  
    }
    else
    {
        printf("%d is not a armstrong no ",sum);  
    }

    return 0;
}
// 4 )

#include <stdio.h>
int main () 
 { 
char choice;
  
int num, compare, num1, num2, month, day;
  
int sum = 0, temp;
  
printf
	("Enter your choice \n \t a for armstrong number  \n \t p for palindrome no  \n \t s for swapping no  \n \t w for swapping but without third variable \n \t m for month check \n \t q for days check  \n :-");
  
scanf ("%c", &choice);
  
 
if (choice == 'a')
	
	{
	  
 
printf ("Enter the 3 digit number :-");
	  
scanf ("%d", &num);
	  
compare = num;
	  
 
while (num > 0)
		
		{
		  
temp = num % 10;
		  
sum = sum + (temp * temp * temp);
		  
num = num / 10;
		
}
	  
if (sum == compare)
		
		{
		  
printf ("%d is a armstrong no ", sum);
		
}
	  
	  else
		
		{
		  
printf ("%d is not a armstrong no ", sum);
		
}
	
 
}
  
  else if (choice == 'p')
	
	{
	  
printf ("Enter the number :-");
	  
scanf ("%d", &num);
	  
compare = num;
	  
 
while (num > 0)
		
		{
		  
temp = num % 10;
		  
sum = sum * 10 + temp;
		  
num = num / 10;
		
}
	  
if (sum == compare)
		
		{
		  
printf ("%d is a palindrome no ", sum);
		
}
	  
	  else
		
		{
		  
printf ("%d is not a palindrome no ", sum);
		
}
	
}
  
  else if (choice == 's')
	
	{
	  
printf ("Enter the two numbers:-");
	  
scanf ("%d %d", &num1, &num2);
	  
 
printf ("Before swapping: a = %d, b = %d\n", num1, num2);
	  
temp = num1;
	  
num1 = num2;
	  
num2 = temp;
	  
printf ("After swapping: a = %d, b = %d\n", num1, num2);
	
 
}
  
  else if (choice == 'w')
	
	{
	  printf ("Enter the two numbers:-");
	  
scanf ("%d %d", &num1, &num2);
	  
printf ("Before swapping: a = %d, b = %d\n", num1, num2);
	  
num1 = num1 + num2;
	  
num2 = num1 - num2;
	  
num1 = num1 - num2;
	  
printf ("After swapping: a = %d, b = %d\n", num1, num2);
	
 
}
  
  else if (choice == 'm')
	
	{
	  
printf ("Enter a number: ");
	  
scanf ("%d", &month);
	  
 
if (month == 1)
		{
		  
printf ("January\n");
		
}
	  else if (month == 2)
		{
		  
printf ("February\n");
		
}
	  else if (month == 3)
		{
		  
printf ("March\n");
		
}
	  else if (month == 4)
		{
		  
printf ("April\n");
		
}
	  else if (month == 5)
		{
		  
printf ("May\n");
		
}
	  else if (month == 6)
		{
		  
printf ("June\n");
		
}
	  else if (month == 7)
		{
		  
printf ("July\n");
		
}
	  else if (month == 8)
		{
		  
printf ("August\n");
		
}
	  else if (month == 9)
		{
		  
printf ("September\n");
		
}
	  else if (month == 10)
		{
		  
printf ("October\n");
		
}
	  else if (month == 11)
		{
		  
printf ("November\n");
		
}
	  else if (month == 12)
		{
		  
printf ("December\n");
		
}
	  else
		{
		  
printf ("Invalid number\n");
		
}
	
}
  
  else if (choice == 'q')
	
	{
	  
printf ("Enter a number: ");
	  
scanf ("%d", &day);
	  
 
if (day == 1)
		{
		  
printf ("Monday\n");
		
}
	  else if (day == 2)
		{
		  
printf ("Tuesday\n");
		
}
	  else if (day == 3)
		{
		  
printf ("Wednesday\n");
		
}
	  else if (day == 4)
		{
		  
printf ("Thursday\n");
		
}
	  else if (day == 5)
		{
		  
printf ("Friday\n");
		
}
	  else if (day == 6)
		{
		  
printf ("Saturday\n");
		
}
	  else if (day == 7)
		{
		  
printf ("Sunday\n");
		
}
	  else
		{
		  
printf ("Invalid number\n");
		
}
	
}
  
  else
	
	{
	  
printf ("Invalid Choice");
	
}
  
return 0;

}
