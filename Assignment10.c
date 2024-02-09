/* // 1 )
#include <stdio.h>

int main()
{
    int num, sum = 0, rep;
    
    printf("Enter the number :-");
    scanf("%d",&num);
    
    while(num>0)
    {
        rep = num % 10;
        sum = sum + rep;
        num = num / 10;
    }
    
    printf("Sum of the no is :- %d",sum);

    return 0;
}
// 2 )
#include <stdio.h>

int main()
{
    int num,count;
    
    printf("Enter the number :-");
    scanf("%d",&num);
    
    while(num>0)
    {
        num = num / 10;
        count++;
    }
    
    printf("digits of the no is :- %d",count);

    return 0;
}
// 3 )
#include <stdio.h>

int main()
{
    int sum = 0 ;
    for(int i = 1 ; i <= 10 ; i++)
    {
        sum = sum + i;
    }
    
    printf("Sum of 1 ----> 10 is %d",sum);

    return 0;
}
// 4 )
#include <stdio.h>

int main()
{
    int num , sum ;
    
    for(num = 34; num <= 78 ; num++)
    {
        sum += num ;
    }
    
    printf(" Sum of the numbers = %d", sum);
    return 0;
}
// 5 )
#include <stdio.h>

int main()
{
    int num , sum ;
    
    for(num = 99 ; num >= 92 ; num--)
    {
        sum += num ;
    }
    
    printf(" Sum of the numbers = %d", sum);
    return 0;
}
// 6 )
#include <stdio.h>

int main()
{
    int num ;
    
    for(num = 1 ; num <= 100 ; num++)
    {
        if( num%2 == 0)
        {
            printf("%d,", num);
        }
    }
    return 0;
}
// 7 )
#include <stdio.h>

int main()
{
    int num ;
    
    for(num = 50 ; num >= 1 ; num--)
    {
        if( num%2 == 0)
        {
            printf("%d,", num);
        }
    }
    return 0;
}
// 8 )
#include <stdio.h>

int main()
{
    int num ;
    
    for(num = 23 ; num <= 78 ; num++)
    {
        if( num%2 == 0)
        {
            printf("%d,", num);
        }
    }
    return 0;
}
// 9 )
#include <stdio.h>

int main()
{
    int num ;
    
    for(num = 1 ; num <= 100 ; num++)
    {
        if( !(num%2 == 0))
        {
            printf("%d,", num);
        }
    }
    return 0;
}
// 10 )

#include <stdio.h>

int main()
{
    int num ;
    
    for(num = 50 ; num >= 1 ; num--)
    {
        if( !(num%2 == 0))
        {
            printf("%d,", num);
        }
    }
    return 0;
}

// 11 )

#include <stdio.h>

int main()
{
    int num ;
    
    for(num = 23 ; num <= 78 ; num++)
    {
        if( !(num%2 == 0))
        {
            printf("%d,", num);
        }
    }
    return 0;
}

// Questions are repeated and i ve did it with for loop already mam :(

// odd wala custom answer


#include <stdio.h>

int main()
{
    int num,range ;
    printf("Enter the range to find odd no b/w :- \n");
    printf("Enter the first num :");
    scanf("%d",&num);
    printf("Enter the last num :");
    scanf("%d",&range);
    
if(range < num)
{
    for(num ; num >= range ; num--)
    {
        if( !(num%2 == 0))
        {
            printf("%d,", num);
        }
    }
}
else
{
        for(num ; num <= range ; num++)
    {
        if( !(num%2 == 0))
        {
            printf("%d,", num);
        }
    }
}
    return 0;
}

//even wala custom answer

#include <stdio.h>

int main()
{
    int num,range ;
    printf("Enter the range to find even no b/w :- \n");
    printf("Enter the first num :");
    scanf("%d",&num);
    printf("Enter the last num :");
    scanf("%d",&range);
    
if(range < num)
{
    for(num ; num >= range ; num--)
    {
        if( num%2 == 0)
        {
            printf("%d,", num);
        }
    }
}
else
{
        for(num ; num <= range ; num++)
    {
        if( num%2 == 0)
        {
            printf("%d,", num);
        }
    }
}
    return 0;
}

// print karne wala custom answer

#include <stdio.h>

int main()
{
    int num,range ;
    printf("Enter the range to print no b/w :- \n");
    printf("Enter the first num :");
    scanf("%d",&num);
    printf("Enter the last num :");
    scanf("%d",&range);
    
if(range < num)
{
    for(num ; num >= range ; num--)
    {
        printf("%d,",num);
    }
}
else
{
    for(num ; num <= range ; num++)
    {
        printf("%d,", num);
    }
}
    return 0;
}
*/

// 12 )

#include<stdio.h>
int	main()
{
    char alpha , choice , operation; 
    int num , sum = 0 , temp , compare , count , range , factorial = 1 , num1 , num2 , result;  
    printf("Enter the charachter to perform the following operations \n");
    printf("\t a : Armstrong number\n");
    printf("\t p : Palindrome\n");
    printf("\t r : Reverse number\n");
    printf("\t c : Count digit\n");
    printf("\t s : Sum of digit\n");
    printf("\t o : Sum of loop numbers\n");
    printf("\t f : (for loop)\n");
    printf("\t l : Factorial\n");
    printf("\t t : Table print\n");
    printf("\t y : Calculator\n :-");
    scanf("%c",&alpha);

    if (alpha == 'a')
    {
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
        printf("%d is not a armstrong no ",sum);  
    }
    }
    else if (alpha == 'p')
    {
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
    else if (alpha == 'r')
    {

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
    else if (alpha == 'c')
    {
    printf("Enter the number :-");
    scanf("%d",&num);
    
    while(num>0)
    {
        num = num / 10;
        count++;
    }
    
    printf("digits of the no is :- %d",count);  
    }
    else if (alpha == 's')
    {
    printf("Enter the number :-");
    scanf("%d",&num);

        while(num>0)
        {
         temp = num % 10 ;
         sum = sum + temp;
         num = num/10;
        }
   
        printf("%d is the sum numbers ",sum);  
    }
    else if (alpha == 'o')
    {
        printf("Enter the number :-");
        scanf("%d",&num);
        compare = num ;
        for(int i = 1 ; i <= 10 ; i++)
        {
             sum = sum + i;
        }
    
    printf("Sum of 1 ----> %d is %d",compare,sum);

    }
    else if (alpha == 'f')
    {
        printf("Enter the choice for the following \n \t e for even : \n \t d for odd :");
        scanf("%c",&choice);
        if (choice == 'e')
        {
            printf("Enter the range to find even no b/w :- \n");
            printf("Enter the first num :");
            scanf("%d",&num);
            printf("Enter the last num :");
            scanf("%d",&range);
    
            if(range < num)
            {
                for(num ; num >= range ; num--)
                {
                    if( num%2 == 0)
                    {
                        printf("%d,", num);
                    }
                }
            }
            else
            {
                    for(num ; num <= range ; num++)
                    {
                        if( num%2 == 0)
                        {
                            printf("%d,", num);
                        }
                    }
            }   
        }
        else if (choice == 'd')
        {
            printf("Enter the range to find odd no b/w :- \n");
            printf("Enter the first num :");
            scanf("%d",&num);
            printf("Enter the last num :");
            scanf("%d",&range);
    
            if(range < num)
            {
                for(num ; num >= range ; num--)
                {
                    if( !(num%2 == 0))
                    {
                        printf("%d,", num);
                    }
                }
            }
            else
            {
                    for(num ; num <= range ; num++)
                {
                    if( !(num%2 == 0))
                    {
                        printf("%d,", num);
                    }
                }
            }
        }
        else
        {
         printf("Invalid operation");               
        }
        
    }
    else if (alpha == 'l')
    {
           printf("Enter the no to calculate its factorial :-");
           scanf("%d",&num);
           temp = num ;
           for(int i = num ; i >=1 ; i--)
            {
                factorial *= i;
            }
            
           printf("Factorial of the %d is :- %d ",temp , factorial); 
    }
    else if (alpha == 't')
    {
        printf("Enter the no to print its Multiplication table :-");
        scanf("%d",&num);
        for(int i = 1 ; i<= 10 ; i++)
        {
            printf("%d x %d = %d \n", num , i , num*i );
        }
    }
    else if (alpha == 'y')
    {
                
        printf("Enter a calculator operation (a, s, m, d, o): ");
        scanf(" %c", &operation);

        
        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);

        if (operation == 'a') {
            result = num1 + num2;
            printf("Addition: %d\n", result);
        } else if (operation == 's') {
            result = num1 - num2;
            printf("Subtraction: %d\n", result);
        } else if (operation == 'm') {
            result = num1 * num2;
            printf("Multiplication: %d\n", result);
        } else if (operation == 'd') {
            result = num1 / num2;
            printf("Division: %d\n", result);
        } else if (operation == 'o' ) {
            result = num1 % num2;
            printf("Modular: %d\n", result);
        } else {
            printf("Invalid calculator operation\n");
        }
    }
    else
    {
        printf("Invalid operation");
    }


    return 0;
}
