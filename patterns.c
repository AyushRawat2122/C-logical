/*
1) 
----------------------
****
****
****
**** 
while +for loop 
---------------------
#include <stdio.h>

int main()
{
    int row = 4;
    for(int i = 0; i < row ; i++)
    {
      
      for(int j = 0; j < 4 ; j++)
      {
        printf("*");
      }
      
      printf("\n");
    }
    
    return 0;
}
*/

/* 2)
------------------------------------
*
**
*** 
while +for loop 
-----------------------------------
#include <stdio.h>

int main()
{
    int row ;
    
    printf("Enter the no of rows u want to print :-");
    scanf("%d",&row);
    
    for(int i = 0 ; i < row ; i++)
    {
        for(int j = 0 ; j <= i ; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    return 0;
}

/*  3)
--------------------------------------------------------
***
**
* 
while +for loop
--------------------------------------------------------
#include <stdio.h>

int main()
{
    int row;
    int reverse = row;
    
    printf("Enter the no of rows u want to print :-");
    scanf("%d",&row);
    for(int i = row ; i>0 ; i--)
    {
        
        for(int j = i ; j > 0 ; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/

/* 3)
------------------------------------------------------------
*
**
*** 
while +for loop 
------------------------------------------------------------
#include <stdio.h>

int main()
{
    int row;
    
    printf("Enter the no of rows u want to print :-");
    scanf("%d",&row);
    for(int i = row ; i>0 ; i--)
    {
        
        for(int j = i ; j > 0 ; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/


/* 4)
------------------------------------------------------------
*
**
***
***
**
*
while +for loop 
------------------------------------------------------------
#include <stdio.h>

int main() {
    int rows;
    printf("Enter the number of rows");
    scanf("%d",&rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = rows - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
*/

/* 6)
-----------------------------------------------------------------------
12345
12345
12345
12345 
12345
-----------------------------------------------------------------------
#include <stdio.h>

int main()
{
    int row ;
    printf("Enter the number of rows");
    scanf("%d", &row);
    
    for(int i = 0 ; i < row ; i++ )
    {
        for(int j=0; j < 5 ; j++)
        {
            printf("%d",(j+1) );
        }
        
        printf("\n");
    }
    return 0;
}
*/

/* 7)
-----------------------------------------------
1111
2222
3333
4444 
-----------------------------------------------
#include <stdio.h>

int main()
{
    int row ;
    int counter = 1;
    printf("Enter the number of rows");
    scanf("%d", &row);
    
    for(int i = 0 ; i < row ; i++ )
    {
        for(int j=0; j < 4 ; j++)
        {
            printf("%d",counter);
        }
        
        counter++ ;
        printf("\n");
    }
    return 0;
}

*/

/* 8)
--------------------------------------------------------------
1
22
333
4444 
--------------------------------------------------------------
#include <stdio.h>

int main()
{
    int row ;
    int counter = 1;
    printf("Enter the number of rows");
    scanf("%d", &row);
    
    for(int i = 0 ; i < row ; i++ )
    {
        for(int j=0; j <= i ; j++)
        {
            printf("%d",counter);
        }
        
        counter++ ;
        printf("\n");
    }
    return 0;
}
*/

/* 9)
---------------------------------------------------------
1
12
123
1234 
--------------------------------------------------------
#include <stdio.h>

int main()
{
    int row ;
    printf("Enter the number of rows");
    scanf("%d", &row);
    
    for(int i = 0 ; i < row ; i++ )
    {
        for(int j=0; j <= i ; j++)
        {
            printf("%d",(j+1));
        }
        printf("\n");
    }
    return 0;
}
*/

/* 10)
-------------------------------------------------------------------
55555
44444
33333
22222
11111 
-------------------------------------------------------------------
#include <stdio.h>

int main()
{
    int row ;
    int counter = 5;
    printf("Enter the number of rows");
    scanf("%d", &row);
    
    for(int i = 0 ; i < row ; i++ )
    {
        for(int j=0; j <5 ; j++)
        {
            printf("%d",counter);
        }
        
        counter-- ;
        printf("\n");
    }
    return 0;
}
*/

/* 11)
------------------------------------------------------------------------------
54321
54321
54321
54321
54321 
------------------------------------------------------------------------------
#include <stdio.h>

int main()
{
    int row ;
 
    printf("Enter the number of rows");
    scanf("%d", &row);
    
    for(int i = 0 ; i < row ; i++ )
    {
        int counter = 5;
        
        for(int j=0; j <5 ; j++)
        {
            printf("%d",counter);
            counter--;
        }
        printf("\n");
    }
    return 0;
}
*/

/* 12)
---------------------------------------------------------
        * 
    *  *
*  *  *
---------------------------------------------------------
#include <stdio.h>

int main()
{
    int row;
    int reverse = row;
    
    printf("Enter the no of rows u want to print :-");
    scanf("%d",&row);
    for(int i = 0 ; i < row ; i++)
    {
        
        for(int j = (row) ; j > i ; j--)
        {
            printf(" ");
        }
        for(int a = 0 ; a < i ; a++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/









