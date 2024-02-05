

/*
//print these numbers charachters or decimal values by taking input from users

#include <stdio.h>

int main() {
    int num1, num2, num3;
    float num4, num5, num6;
    char char1, char2;

    printf("Enter an integer: ");
    scanf("%d", &num1);

    printf("Enter another integer: ");
    scanf("%d", &num2);

    printf("Enter a negative integer: ");
    scanf("%d", &num3);

    printf("Enter a floating-point number: ");
    scanf("%f", &num4);

    printf("Enter another floating-point number: ");
    scanf("%f", &num5);

    printf("Enter a negative floating-point number: ");
    scanf("%f", &num6);

    printf("Enter a character: ");
    scanf(" %c", &char1);

    printf("Enter another character: ");
    scanf(" %c", &char2);

    printf("\nEntered values:\n");
    printf("Integer 1: %d\n", num1);
    printf("Integer 2: %d\n", num2);
    printf("Negative Integer: %d\n", num3);
    printf("Floating-point 1: %f\n", num4);
    printf("Floating-point 2: %f\n", num5);
    printf("Negative Floating-point: %f\n", num6);
    printf("Character 1: %c\n", char1);
    printf("Character 2: %c\n", char2);

    return 0;
}

----------------------------------------------------------------
2.
#includ
e<stdio.h>
int main()  {
    int a , b;
    printf(" \t -------------Program to calculate sum of two numbers---------- \t \n \n");
    
    printf("enter the value of a = "); // taking the value of first number
    scanf("%d",&a);
    printf("enter the value of b = "); // taking the value of second numbers
    scanf("%d",&b);
    
    printf("The sum of a and b is :- %d ", a+b); // calculating sum and printing results
    return 0;
}

--------------------------------------------------------------------
3.
//output 2+6+1+5+78+12 {user input}

#include <stdio.h>

int main() {

    int num1, num2, num3, num4, num5, num6;

    printf("Enter the value for num1: ");
    scanf("%d", &num1);

    printf("Enter the value for num2: ");
    scanf("%d", &num2);

    printf("Enter the value for num3: ");
    scanf("%d", &num3);

    printf("Enter the value for num4: ");
    scanf("%d", &num4);

    printf("Enter the value for num5: ");
    scanf("%d", &num5);

    printf("Enter the value for num6: ");
    scanf("%d", &num6);

    int result = num1 + num2 + num3 + num4 + num5 + num6;

    printf("Sum: %d\n", result);

    return 0;
}

---------------------------------------------------------------------------------
4.

// output 23 * 2 - 9 + 34 {user input}

#include <stdio.h>

int main() {

    int num1, num2, num3, num4;

    printf("Enter the value for num1: ");
    scanf("%d", &num1);

    printf("Enter the value for num2: ");
    scanf("%d", &num2);

    printf("Enter the value for num3: ");
    scanf("%d", &num3);

    printf("Enter the value for num4: ");
    scanf("%d", &num4);

    int result = num1 * num2 - num3 + num4;

    printf("Result: %d\n", result);

    return 0;
}

----------------------------------------------------------------------------
5.

//output 12+(34*2)-45 {user input}

#include <stdio.h>

int main() {
    int num1, num2, num3, num4;

    printf("Enter the value for num1: ");
    scanf("%d", &num1);

    printf("Enter the value for num2: ");
    scanf("%d", &num2);

    printf("Enter the value for num3: ");
    scanf("%d", &num3);

    printf("Enter the value for num4: ");
    scanf("%d", &num4);

    int result = num1 + (num2 * num3) - num4;
    printf("Result: %d\n", result);

    return 0;
}

----------------------------------------------------------------------
6.

//output 1.2*(34+1)/2+45

#include <stdio.h>

int main() {
    int a, b, e;
    float c, d, result;

    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%f", &c);
    printf("Enter the value of d: ");
    scanf("%f", &d);
    printf("Enter the value of e: ");
    scanf("%d", &e);
    result = c * (a + b) / e + d;
    printf("%.2f", result);

    return 0;
}

--------------------------------------------------------------------------
7.

*/

//output 4.5*2 + 8.9*1.2 - 89/2 + 34 {user defined}

#include <stdio.h>

int main() { 
    float num1, num3;
    int num2, num4, num5, num6;

    printf("Enter the value for num1 (float): ");
    scanf("%f", &num1);

    printf("Enter the value for num2 (int): ");
    scanf("%d", &num2);

    printf("Enter the value for num3 (float): ");
    scanf("%f", &num3);

    printf("Enter the value for num4 (int): ");
    scanf("%d", &num4);

    printf("Enter the value for num5 (int): ");
    scanf("%d", &num5);

    printf("Enter the value for num6 (int): ");
    scanf("%d", &num6);

    float result = num1 * num2 + num3 * num4 / num5 + num6;

    printf("Result: %f\n", result);

    return 0;
}



