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
