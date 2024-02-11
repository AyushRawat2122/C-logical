//1 )
#include <stdio.h>

int main()
{
    for(int i = 1 ; i <= 5 ; i++)
    {
        for(int j = 1; j <= i ; j++)
        {
            printf("*");
        }
        
    printf("\n");
    }

    return 0;
}
//2 )
#include <stdio.h>

int main()
{
    for(int i = 5 ; i >= 1; i--)
    {
        for(int j = 1; j <= i ; j++)
        {
            printf("*");
        }
        
    printf("\n");
    }

    return 0;
}
//3 )
#include <stdio.h>

int main()
{
    for(int i = 1 ; i <= 5 ; i++)
    {
        for(int j = 1; j <= 5 ; j++)
        {
            printf("%d",j%2);
        }
        
    printf("\n");
    }

    return 0;
}
//4 )
#include <stdio.h>

int main()
{
    int num = 6;
    
    for(int i = 1 ; i <= num/2 ; i++)
    {
     for(int j = 1 ; j <= i ; j++)
     {
        printf("*"); 
     }
        
    printf("\n");
    }

    for(int i = num/2 ; i >= 1 ; i--)
    {
     for(int j = 1 ; j <= i ; j++)
     {
        printf("*"); 
     }
    printf("\n");
    }
    return 0;
}

// 5 )

#include <stdio.h>

int main()
{
    int num = 6;
    
    for(int i = 1 ; i <= (num/2)+1 ; i++)
    {
     for(int j = 1 ; j <= i ; j++)
     {
        printf("*"); 
     }
        
    printf("\n");
    }
    for(int i = num/2 ; i >= 1 ; i--)
    {
     for(int j = 1 ; j <= i ; j++)
     {
        printf("*"); 
     }
    printf("\n");
    }
    return 0;
}

//6 )

#include <stdio.h>

int main()
{
    for(int i = 1 ; i <= 5 ; i++)
    {
        for(int j = 1; j <= i ; j++)
        {
            printf("%d",i);
        }
        
    printf("\n");
    }

    return 0;
}

//7 )

#include <stdio.h>

int main()
{
    for(int i = 1 ; i <= 5 ; i++)
    {
        for(int j = 1; j <= i ; j++)
        {
            printf("%d",i%2);
        }
        
    printf("\n");
    }

    return 0;
}

//8 )

#include <stdio.h>

int main()
{
    for(int i = 1 ; i <= 5 ; i++)
    {
        for(int j = 1; j <= i ; j++)
        {
            printf("%d",j);
        }
        
    printf("\n");
    }

    return 0;
}

//9 )

#include <stdio.h>

int main()
{
    for(int i = 1 ; i <= 5 ; i++)
    {
        for(int j = 1; j <= i ; j++)
        {
            printf("%d",j%2);
        }
        
    printf("\n");
    }

    return 0;
}

//10 )

#include <stdio.h>

int main()
{ int num = 1;
    for(int i = 1 ; i <= 5 ; i++)
    {
        for(int j = 1; j <= i ; j++)
        {
            printf("%d",num);
            num++;
        }
        
    printf("\n");
    }

    return 0;
}

//11 )

#include <stdio.h>

int main()
{ 
    for(int i = 1 ; i <= 4 ; i++)
    {
        for(int k = i ; k < 4 ; k++)
        {
            printf(" ");
        }
        for(int j = 1 ; j <= i ; j++)
        {
            printf("*");
        }
     
    printf("\n");
    }

    return 0;
}

//12 )

#include <stdio.h>

int main()
{ 
    for(int i = 1 ; i <= 4 ; i++)
    {
     for(int k = 0 ; k < i ; k++)
     {printf(" ");}
     for(int j = 4 ; j >= i ; j--)
     {printf("*");}
     
    printf("\n");
    }

    return 0;
}

//13 )

#include <stdio.h>

int main()
{      
    for(int i = 1 ; i <= 4 ; i++)
    {
        for(int k = i ; k < 4 ; k++)
        {
            printf(" ");
        }
        for(int j = 1 ; j <= i ; j++)
        {
            printf("*");
        }
     
    printf("\n");
    }
    
    for(int i = 1 ; i <= 4 ; i++)
    {
      for(int j = 1 ; j<=4 ; j++)
      {
        if(i>j)
        {
        printf(" "); 
        }
        else
        {
        printf("*"); 
        }
      }
     
    printf("\n");
    }

    return 0;
}

//14 )

#include <stdio.h>

int main()
{      
    for(int i = 1 ; i <= 4 ; i++)
    {
        for(int k = i ; k < 4 ; k++)
        {
            printf(" ");
        }
        for(int j = 1 ; j <= i ; j++)
        {
            printf("*");
        }
     
    printf("\n");
    }
    
    for(int i = 1 ; i <= 4 ; i++)
    {
      for(int j = 1 ; j<=4 ; j++)
      {
        if((i+1)>j)
        {
        printf(" "); 
        }
        else
        {
        printf("*"); 
        }
      }
     
    printf("\n");
    }

    return 0;
}

//15 )
#include <stdio.h>

int main()
{      
    for(int i = 1 ; i <= 4 ; i++)
    {
        for(int k = i ; k < 4 ; k++)
        {
            printf(" ");
        }
        for(int j = 1 ; j <= i ; j++)
        {
            printf("* ");
        }
     
    printf("\n");
    }
    
    return 0;
}

//16 )

#include <stdio.h>

int main()
{      
    for(int i = 1 ; i <= 4 ; i++)
    {
        for(int k = i ; k < 4 ; k++)
        {
            printf(" ");
        }
        for(int j = 1 ; j <= i ; j++)
        {
            printf("* ");
        }
     
    printf("\n");
    }
    
    for(int i = 1 ; i <= 4 ; i++)
    {
      for(int j = 1 ; j<=4 ; j++)
      {
        if((i+1)>j)
        {
        printf(" "); 
        }
        else
        {
        printf("* "); 
        }
      }
     
    printf("\n");
    }

    return 0;
}

//17 )

#include <stdio.h>

int main()
{      

    
    for(int i = 1 ; i <= 4 ; i++)
    {
      for(int j = 1 ; j<=4 ; j++)
      {
        if((i)>j)
        {
        printf(" "); 
        }
        else
        {
        printf("* "); 
        }
      }
     
    printf("\n");
    }

    return 0;
}

//18 )

#include <stdio.h>

int main()
{      
    for(int i = 1 ; i <= 4 ; i++)
    {
        for(int k = i ; k < 4 ; k++)
        {
            printf(" ");
        }
        for(int j = 1 ; j <= i ; j++)
        {
            printf("* ");
        }
     
    printf("\n");
    }
    
    for(int i = 1 ; i <= 4 ; i++)
    {
      for(int j = 1 ; j<=4 ; j++)
      {
        if(i>j)
        {
        printf(" "); 
        }
        else
        {
        printf("* "); 
        }
      }
     
    printf("\n");
    }

    return 0;
}

//19 )
#include <stdio.h>

int main()
{
    for(int i = 1 ; i <= 4 ; i++)
    {
        for(int j = 1; j <= i ; j++)
        {
            printf("%d",j*2);
        }
        
    printf("\n");
    }

    return 0;
}

//20 )
#include <stdio.h>

int main()
{
    for(int i = 1 ; i <= 4 ; i++)
    {
        for(int j = 1; j <= 5 ; j++)
        {
            printf("%d",j);
        }
        
    printf("\n");
    }

    return 0;
}

//21 )

#include <stdio.h>

int main()
{
    for(int i = 1 ; i <= 4 ; i++)
    {
        for(int j = 1; j <= 5 ; j++)
        {
            printf("*");
        }
        
    printf("\n");
    }

    return 0;
}

//22 )

#include <stdio.h>

int main()
{
    for(int i = 1 ; i <= 5 ; i++)
    {
        for(int j = 1; j <= 4 ; j++)
        {
            printf("%d",i);
        }
        
    printf("\n");
    }

    return 0;
}