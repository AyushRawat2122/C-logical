/* 
//1)
#include<stdio.h>
int main()
{
    int num=0 ;
    while(num<5)
    {
        printf("%d", num+1);
        num++;
    }
    return 0;
}
//2)
#include<stdio.h>
int main()
{
    int num=0 ;
    while(num<10)
    {
        printf("%d,", num+1);
        num++;
    }
    return 0;
}
//3)
#include<stdio.h>
int main()
{
    int num=0 ;
    while(num<100)
    {
        printf("%d,", num+1);
        num++;
    }
    return 0;
}
//4)
#include<stdio.h>
int main()
{
    int num=50 ;
    while(num<=100)
    {
        printf("%d,", num);
        num++;
    }
    return 0;
}
//5)
#include<stdio.h>
int main()
{
    int num=12 ;
    while(num<=89)
    {
        printf("%d,", num);
        num++;
    }
    return 0;
}
//6)
#include<stdio.h>
int main()
{
    int num=5 ;
    while(num>=1)
    {
        printf("%d,", num);
        num--;
    }
    return 0;
}
//7)
#include<stdio.h>
int main()
{
    int num=10;
    while(num>=1)
    {
        printf("%d,", num);
        num--;
    }
    return 0;
}
//8)
#include<stdio.h>
int main()
{
    int num=100;
    while(num>=1)
    {
        printf("%d,", num);
        num--;
    }
    return 0;
}
//9 )
#include<stdio.h>
int main()
{
    int num=50;
    while(num>=1)
    {
        printf("%d,", num);
        num--;
    }
    return 0;
}
//10 )
#include<stdio.h>
int main()
{
    int num=89 ;
    while(num>=23)
    {
        printf("%d,", num);
        num--;
    }
    return 0;
}
*/
//11 )
#include<stdio.h>
int main()
{
    char choice , gender , alphabet , choice2;
    int num ,age ,num1 , num2 , temp;
    
  printf("Enter your choice:- \n \t a for 1 to 10 value print \n \t b for 10 to 1 value print \n \t c for 23 to 78 value print \n \t d for 89 to 78 value print \n \t g to check gender \n \t v to check voter id \n \t e to check for vowels and consonants \n \t s for swapping the numbers \n :-");
  scanf(" %c",&choice);
  
  if(choice == 'a')
  {
    num=0 ;
    while(num<10)
    {
        printf("%d,", num+1);
        num++;
    }
  }
  else if(choice == 'b')
  {
    num=10;
    while(num>=1)
    {
        printf("%d,", num);
        num--;
    }
  }
  else if(choice == 'c')
  {
    num=23 ;
    while(num<=78)
    {
        printf("%d,", num);
        num++;
    }
  }
  else if(choice == 'd')
  {
    num=89 ;
    while(num>=78)
    {
        printf("%d,", num);
        num--;
    }
  }
  else if(choice == 'g')
  {
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
  else if(choice == 'v')
  {
      printf("Please Enter your Age:-");
      scanf("%d",&age);
      if(age>=18)
      {
          printf("You 're Eligible to vote");
      }
      else
      {
         printf("sorry , but u can't vote");
      }
      
  }
  else if(choice == 'e')
  {
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
  else if(choice == 's')
  { 
    printf("Enter the two numbers:-");
    scanf("%d %d",&num1 , &num2);
    printf("Wether you want to swap a number with a new variable or without a new variable \n \t w for without a new variable \n \t o for with a new variable \n :-");
    scanf(" %c",&choice2);
    
    if(choice2 == 'w')
    {
    printf("Before swapping: a = %d, b = %d\n", num1,num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("After swapping: a = %d, b = %d\n", num1,num2);
    }
    else if(choice2 == 'o')
    {
    printf("Before swapping: a = %d, b = %d\n", num1,num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After swapping: a = %d, b = %d\n", num1,num2);  
    }
    else
    {
        printf("Invalid operation");
    }
  }
  return 0;
}