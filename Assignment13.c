/*
// 1 )

#include <stdio.h>

int addition(int a , int b);
int subtraction(int a , int b);
int multiply(int a , int b);
int divide(int a , int b);

int main()
{
    int num1, num2 , result ;
    char choice;
    printf("Enter the first number and second number :- ");
    scanf("%d %d", &num1 ,&num2);
    
    printf("Enter the operation you want to perform with these two numbers :- \n \t a for addition \n \t s for ubtraction \n \t m for multiplication \n \t d for divide \n :-");
    scanf(" %c",&choice);
    
    if(choice == 'a')
    {
        result =  addition(num1,num2) ;
        printf("addition of two numbers :- %d", result);
    }
    else if(choice == 's')
    {
        result = subtraction(num1,num2);
        printf("subtraction of two numbers :- %d", result);
    }
    else if(choice == 'm')
    { 
        result = multiply(num1,num2);
        printf("multiplication of two numbers :- %d", result);
    }
    else if(choice == 'd')
    {
        result = divide(num1,num2);
        printf("divide of two numbers :- %d", result);
    }
    else
    {
    printf("Invalid operation");
    }
    
    return 0;
}

int addition(int a , int b)
{
   return a+b; 
}

int subtraction(int a , int b)
{
    return a-b;
}

int multiply(int a , int b)
{
    return a*b;
}

int divide(int a , int b)
{
    return a/b;
}
*/
// 2 )


#include <stdio.h>

void swap();
void voterEligiblity();
void vowelCheck();
void genderCheck();
void threeNumberMaximum();
void factorial();
void palindrome();
void armstrong();
void reverse();
void sumOfDigits();
void evenNoCheck();
void fibonacci();
void table();
int main()
{
 char choice ;
 
printf("Enter the following operation");
printf(" \n \t  's' for the swapping the numbers");
printf(" \n \t  'y' for the Voter's eligiblity test");
printf(" \n \t  'v' for the Vowel check");
printf(" \n \t  'g' for the Gender check");
printf(" \n \t  'm' for the Three number Maximum");
printf(" \n \t  'f' for the factorial of a number");
printf(" \n \t  'p' for the palindrome");
printf(" \n \t  'a' for the Armstrong number check");
printf(" \n \t  'r' for the Reverse");
printf(" \n \t  'b' for the sum");
printf(" \n \t  'e' for the Even number check");
printf(" \n \t  'z' for the fibonacci ");
printf(" \n \t  't' for the table \n :- ");


scanf("%c",&choice);

if(choice == 's')
{
  swap();
}
else if (choice == 'y')
{
  voterEligiblity();  
}
else if (choice == 'v')
{
  vowelCheck();  
}

else if (choice == 'g')
{
  genderCheck(); 
}

else if (choice == 'm')
{
  threeNumberMaximum();  
}

else if (choice == 'f')
{
  factorial();
}

else if (choice == 'p')
{
  palindrome();
}

else if (choice == 'a')
{
  armstrong();  
}

else if (choice == 'r')
{
  reverse();   
}

else if (choice == 'b')
{
  sumOfDigits();   
}

else if (choice == 'e')
{
 evenNoCheck(); 
}
else if (choice == 'z')
{
 fibonacci();
}
else if (choice == 't')
{
 table();   
}
 return 0;  
}

void swap()
{
    int temp , num1 , num2 ;

      printf("Enter the two numbers :- ");
      scanf("%d %d" ,&num1 ,&num2);
            
      printf("The number before swap :- num1 = %d , num2 = %d \n", num1 , num2 );
            
            temp = num1 ;
            num1 = num2 ;
            num2 = temp ;
    
      printf("The number after swap :- num1 = %d , num2 = %d \n", num1 , num2 );
}

void voterEligiblity()
{
    int age ; 
      printf("Enter the Age :-");
      scanf("%d",&age);
    if(age >= 18)
    {
      printf("you're eligible to vote");  
    }
    else
    {
      printf("you're not eligible to vote");
    }
}

void vowelCheck()
{
    char alphabet;
    
    printf("Enter the alphabet :-");
    scanf(" %c",&alphabet); 
    
    if(alphabet == 'a' || alphabet == 'e' || alphabet == 'i' ||alphabet == 'o' || alphabet == 'u' || alphabet == 'A' || alphabet == 'E' || alphabet == 'I' ||alphabet == 'O' || alphabet == 'U')
    {
        printf("%c is a vowel",alphabet);
    }
    else
    {
        printf("%c is a consonant",alphabet);
    }
}

void genderCheck()
{
    char gender;
    
      printf("Enter M for Male and F for female:-");
      scanf(" %c",&gender);
      
      if(gender == 'M' || gender == 'm')
      {
          printf("your gender is Male");
      }
      else if(gender == 'F' || gender == 'f')
      {
          printf("your gender is Female");
      }
      else
      {
          printf("Unspecified Gender");
      }
}

void threeNumberMaximum()
{
    int a , b , c ;
    
    printf("Enter the three number :- ");
    scanf("%d %d %d",&a ,&b ,&c);
    
    if(a>b && a>c)
    {
        printf("%d is greater",a);
    }
    
    else if(b>a && b>c)
    {
        printf("%d is greater",b);
    }
    else if(c>a && c>a)
    {
        printf("%d is greater",c);
    }
    
    else 
    {
        printf("all the numbers are equal");
    }

}

void factorial()
 {
    int num , factorial = 1, temp;
    
        printf("Enter the no to calculate its factorial :-");
        scanf("%d",&num);
        temp = num ;
        for(int i = num ; i >=1 ; i--)
        
            {
                factorial *= i;
            }
            
        printf("Factorial of the %d is :- %d ",temp , factorial);    
 }

void palindrome()
{
    int compare , sum = 0 , num , temp ;
    printf("Enter the number :-");
    scanf("%d",&num);
    compare = num ;
    
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
}

void armstrong()
{
    int compare , sum = 0 , num , temp ;
    printf("Enter the 3 digit number :-");
    scanf("%d",&num);
    compare = num;
    
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
        printf("%d is not a armstrong no ",compare);  
    }
}

void reverse()
{
    int sum = 0 , num , temp ;
    printf("Enter the number :-");
    scanf("%d",&num);
    
    while(num>0)
    {
     temp = num % 10 ;
     sum = sum * 10 + temp;
     num = num/10;
    }
    
    printf("%d",sum);

}

void sumOfDigits()
{
    int sum = 0 , num , temp ;
    printf("Enter the number :-");
    scanf("%d",&num);
    
    while(num>0)
    {
     temp = num % 10 ;
     sum = sum + temp;
     num = num/10;
    }
    
    printf("%d",sum); 
}

void evenNoCheck()
{
    int num ;
    
    printf("Enter the number :-");
    scanf("%d",&num);
    
    if(num%2 == 0)
    {
        printf("Entered no is even");
    }
    else
    {
        printf("Entered no is odd");
    }
}
void fibonacci()
{
    int num;
    int a = 0, b =1 ;
    
    printf("Enter the  number till u want series :-");
    scanf("%d",&num);
    
    for(int i = 0 ; i <= num ; i++)
    {
      if(i == 0)
      {
        printf("%d ,",a);
      }
      if(i == 1)
      {
        printf("%d ,",b);  
      }
      b = a + b ; 
      a = b - a ;
      printf("%d ,",b);
    }
}
void table()
{
        int num;
        
        printf("Enter the no to print its Multiplication table :-");
        scanf("%d",&num);
        
        for(int i = 1 ; i<= 10 ; i++)
        {
            printf("%d x %d = %d \n", num , i , num*i );
        } 
}

