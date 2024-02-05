/* // 1)


#include <stdio.h>

int main()
{
    int num1;
    printf("Enter the number:-");
    scanf("%d",&num1);
    
    if(num1>50)
    {
        printf("The entered number is greater than 50");
    }
    else
    {
        printf("The entered number is smaller than 50");
    }

    return 0;
}


//2)


#include <stdio.h>

int main()
{
    int num1;
    printf("Enter the number:-");
    scanf("%d",&num1);
    
    if(num1>342)
    {
        printf("The entered number is greater than 342");
    }
    else
    {
        printf("The entered number is smaller than 342");
    }

    return 0;
}

// 3) 

#include <stdio.h>

int main()
{
    int num1;
    printf("Enter the number:-");
    scanf("%d",&num1);
    
    if(num1<50)
    {
        printf("The entered number is smaller than 50");
    }
    else
    {
        printf("The entered number is greater than 50");
    }

    return 0;
}

//4 )

#include <stdio.h>

int main()
{
    int num1;
    printf("Enter the number:-");
    scanf("%d",&num1);
    
    if(num1%2 == 0)
    {
        printf("The entered number is even");
    }
    else
    {
        printf("The entered number is odd");
    }

    return 0;
}

//5 ) 

#include <stdio.h>

int main()
{
    int num1;
    printf("Enter the number:-");
    scanf("%d",&num1);
    
    if(num1%5 == 0)
    {
        printf("The entered number is divisible by 5");
    }
    else
    {
        printf("The entered number is not divisible by 5");
    }

    return 0;
}
//6 )

#include <stdio.h>

int main()
{
    int num1;
    printf("Enter the number:-");
    scanf("%d",&num1);
    
    if(num1%88 == 0)
    {
        printf("The entered number is divisible by 88");
    }
    else
    {
        printf("The entered number is not divisible by 88");
    }

    return 0;
}

//7 )


#include <stdio.h>

int main()
{
    int num1;
    printf("Enter the number:-");
    scanf("%d",&num1);
    
    if(num1 == 88)
    {
        printf("The entered number is equal 88");
    }
    else
    {
        printf("Invalid number");
    }

    return 0;
}

//8 )


#include <stdio.h>

int main()
{
    char alpha;
    printf("Enter the charachter:-");
    scanf("%c",&alpha);
    
    if(alpha == 'b')
    {
        printf("B for Ball ;)");
    }
    else
    {
        printf("Invalid charachter");
    }

    return 0;
}

//9 ) 


#include <stdio.h>

int main()
{
    char alpha;
    printf("Enter the charachter:-");
    scanf("%c",&alpha);
    
    if(alpha == 'k')
    {
        printf("K for Kite ;)");
    }
    else
    {
        printf("Invalid charachter");
    }

    return 0;
}

//10 )


#include <stdio.h>

int main()
{
    int num1 , num2 ;
  
    
    printf("Enter the first number:-");
    scanf("%d",&num1);
    
    printf("Enter the second number:-");
    scanf("%d",&num2);
    
    char alpha;
    printf("Enter the Operation:-");
    scanf(" %c",&alpha);
    
    if(alpha == 'a')
    {
        printf("Sum of the two numbers is :- %d", num1 + num2);
    }
    else
    {
        printf("Invalid operation");
    }

    return 0;
}

// 11)

#include <stdio.h>

int main()
{
    int num1 , num2 ;
  
    
    printf("Enter the first number:-");
    scanf("%d",&num1);
    
    printf("Enter the second number:-");
    scanf("%d",&num2);
    
    char alpha;
    printf("Enter the Operation:-");
    scanf(" %c",&alpha);
    
    if(alpha == 's')
    {
        printf("difference of the two numbers is :- %d", num1 - num2);
    }
    else
    {
        printf("Invalid operation");
    }

    return 0;
}

// 12)

#include <stdio.h>

int main()
{
    int num1 , num2 , num3 ;
  
    
    printf("Enter the first number:-");
    scanf("%d",&num1);
    
    printf("Enter the second number:-");
    scanf("%d",&num2);

    printf("Enter the third number:-");
    scanf("%d",&num3);
    
    char alpha;
    printf("Enter the Operation:-");
    scanf(" %c",&alpha);
    
    if(alpha == 'm')
    {
        printf("product of the three numbers is :- %d", num1 * num2 * num3);
    }
    else
    {
        printf("Invalid operation");
    }

    return 0;
}

// 13 ) 

#include <stdio.h>

int main()
{
    int num1 , num2 ;
  
    
    printf("Enter the first number:-");
    scanf("%d",&num1);
    
    printf("Enter the second number:-");
    scanf("%d",&num2);
    
    char alpha;
    printf("Enter the Operation:-");
    scanf(" %c",&alpha);
    
    if(alpha == 'd')
    {
        printf(" Division of the two numbers is :- %d", num1 / num2);
    }
    else
    {
        printf("Invalid operation");
    }

    return 0;
}

// 14 )

#include <stdio.h>

int main()
{
    int num1 , num2 ;
  
    
    printf("Enter the first number:-");
    scanf("%d",&num1);
    
    printf("Enter the second number:-");
    scanf("%d",&num2);
    
    char alpha;
    printf("Enter the Operation:-");
    scanf(" %c",&alpha);
    
    if(alpha == 'o')
    {
        printf("Remainder on divison of the two numbers is :- %d", num1 % num2);
    }
    else
    {
        printf("Invalid operation");
    }

    return 0;
}

// 15)


#include <stdio.h>

int main()
{
    int base , height ;
  
    
    printf("Enter the base:-");
    scanf("%d",&base);
    
    printf("Enter the height:-");
    scanf("%d",&height);
    
    char alpha;
    printf("Enter the Operation:-");
    scanf(" %c",&alpha);
    
    if(alpha == 't')
    {
        printf("Area of triangle is :- %d ", (0.5 * base * height ));
    }
    else
    {
        printf("Invalid operation");
    }

    return 0;
} 

// 16 )

#include <stdio.h>

int main()
{
    int radius ;
  
    
    printf("Enter the radius :-");
    scanf("%d",&radius);
    
    char alpha;
    printf("Enter the Operation:-");
    scanf(" %c",&alpha);
    
    if(alpha == 'c')
    {
        printf("Area of circle is :- %d ", ( 3.14 * radius * radius ));
    }
    else
    {
        printf("Invalid operation");
    }

    return 0;
} 

// 17 )

#include <stdio.h>

int main()
{
    int length , breadth ;
  
    
    printf("Enter the length:-");
    scanf("%d",&length);
    
    printf("Enter the breadth:-");
    scanf("%d",&breadth);
    
    char alpha;
    printf("Enter the Operation:-");
    scanf(" %c",&alpha);
    
    if(alpha == 'r')
    {
        printf("Area of Rectangle is :- %d ", ( length * breadth));
    }
    else
    {
        printf("Invalid operation");
    }

    return 0;
} 

// 18 )

#include <stdio.h>

int main()
{
    int radius ;
    printf("Enter the radius :-");
    scanf("%d",&radius);
    
    char alpha;
    printf("Enter the Operation:-");
    scanf(" %c",&alpha);
    
    float volume = (2*3.14*radius*radius*radius)/3 ;

    if(alpha == 'h')
    {
        printf("Volume of hemisphere is :- %f ", volume);
    }
    else
    {
        printf("Invalid operation");
    }

    return 0;
} 

// 19 )

#include <stdio.h>

int main()
{
    int radius ;
    printf("Enter the radius :-");
    scanf("%d",&radius);
    
    char alpha;
    printf("Enter the Operation:-");
    scanf(" %c",&alpha);
    
    float volume = (4*3.14*radius*radius*radius)/3 ;

    if(alpha == 's')
    {
        printf("Volume of sphere is :- %f ", volume);
    }
    else
    {
        printf("Invalid operation");
    }

    return 0;
} 

*/

//20 )

#include <stdio.h>

int main()
{
    int length , breadth ;
  
    
    printf("Enter the diagonal 1:-");
    scanf("%d",&diagonal1);
    
    printf("Enter the diagonal 2:-");
    scanf("%d",&diagonal2);
    
    char alpha;
    printf("Enter the Operation:-");
    scanf(" %c",&alpha);
    
    if(alpha == 'r')
    {
        printf("Area of Rhombus is :- %d ", ( diagonal1 * diagonal2)/2 );
    }
    else
    {
        printf("Invalid operation");
    }

    return 0;
} 



