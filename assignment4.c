/* 1.

#include<stdio.h>
int main()  {
    printf("india\n");
    printf("iran\n");
    printf("japan\n");
    printf("america\n");
    printf("sri lanka\n");
    return 0;
}

--------------------------------------------------
2.

#include<stdio.h>
int main()  {
    printf("rahul\n");
    printf("sumesh\n");
    printf("sanjay\n");
    printf("tejveer\n");
    printf("ram\n");
    return 0;
}

------------------------------------------------------
3.

#include<stdio.h>
int main()  {
    printf("mumbai\n");
    printf("hyderabad\n");
    printf("delhi\n");
    printf("bangalore\n");
    printf("gujarat\n");
    return 0;
}

------------------------------------------------------------
4.

#include<stdio.h>
int main()  {
    printf("salad\n");
    printf("rice\n");
    printf("bread\n");
    printf("butter\n");
    printf("pizza\n");
    return 0;
}

---------------------------------------------------------------
5.
#include<stdio.h>
int main()  {
    printf("punjab\n");
    printf("tamil nadu\n");
    printf("haryana\n");
    printf("rajasthan\n");
    printf("gujarat\n");
    return 0;
}

-------------------------------------------------------------
6.
#include<stdio.h>
int main()  {
     int a=6;
    printf("%d\n",a);
    int b=23;
    printf("%d\n",b);
    int c=65;
    printf("%d\n",c);
    int d=-23;
    printf("%d\n",d);
    float e=1.56;
    printf("%f\n",e);
    float f=0.8;
    printf("%f\n",f);
    float g=-2.752;
    printf("%f\n",g);
    char h='t';
    printf("%c\n",h);
    int i=123456;
    printf("%d\n",i);
    char j='o';
    printf("%c\n",j);
    return 0; 
}

------------------------------------------------------------------------
7.
#include<stdio.h>
int main()  {
    int a=34+89;
    printf("%d\n",a);
    int b=2*2;
    printf("%d\n",b);
    int c=67-4;
    printf("%d\n",c);
    int d=24/2;
    printf("%d\n",d);
    return 0;
}


-----------------------------------------------------------------------
8.

#include<stdio.h>
int main()  {
    int a;
    printf("enter the value of a:-");
    scanf("%d",&a);
    int b, c, d, e, f;
    printf("enter the value of b:-");
    scanf("%d",&b);
    printf("enter the value of c:-");
    scanf("%d",&c);
    printf("enter the value of d:-");
    scanf("%d",&d);
    printf("enter the value of e:-");
    scanf("%d",&e);
    printf("enter the value of f:-");
    scanf("%d",&f);
    
    int g = a+b+c+d+e+f;
    printf("the solution is :-%d",g);
    return 0;
}

--------------------------------------------------------------------------
9.

#include<stdio.h>
int main()  {
    int a;
    printf("enter the value of a:-");
    scanf("%d",&a);
   int b, c, d;
   printf("enter the value of b:-");
   scanf("%d",&b);
   printf("enter the value of c:-");
   scanf("%d",&c);
   printf("enter the value of d:-");
   scanf("%d",&d);
   
   int e =a*b-c+d;
   printf("the solution is  :-%d",e);
    return 0;
}

----------------------------------------------------------------------------
10.

#include<stdio.h>
int main()  {
    int a;
    printf("enter the value of a:-");
    scanf("%d",&a);
   int b, c, d;
   printf("enter the value of b:-");
   scanf("%d",&b);
   printf("enter the value of c:-");
   scanf("%d",&c);
   printf("enter the value of d:-");
   scanf("%d",&d);
   
   int e =a+(b*c)-d;
   printf("the solution is :-%d",e);
    return 0;
}

-------------------------------------------------------------------------------
11.

#include<stdio.h>
int main()
{
  float a;
  printf ("enter the value of a :-");
  scanf ("%f", &a);
  int b, c, d, e;
  printf ("enter the value of b :-");
  scanf ("%d", &b);
  printf ("enter the value of c :-");
  scanf ("%d", &c);
  printf ("enter the value of d :-");
  scanf ("%d", &d);
  printf ("enter the value of e :-");
  scanf ("%d", &e);
  
  float f = a*(b+c)/d+e ;
  printf("The solution is  :- %f", f);
  
  return 0;
}

-------------------------------------------------------------------------------
*/

12.

#include<stdio.h>
int main()  {
    float a;
    printf("enter the value of a:-");
    scanf("%f",&a);
    int b;
    printf("enter the value of b:-");
    scanf("%d",&b);
    float c;
    printf("enter the value of c:-");
    scanf("%f",&c);
    float d;
    printf("enter the value of d:-");
    scanf("%f",&d);
    int e, f, g;
    printf("enter  the value of e:-");
    scanf("%d",&e);
    printf("enter  the value of f:-");
    scanf("%d",&f);
    printf("enter  the value of g:-");
    scanf("%d",&g);
    
    float h = a*b+c*d-e/f+g;
    printf("the solution is :-%f",h);
    return 0;
}