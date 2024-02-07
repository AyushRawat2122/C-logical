/* 
// 1 )

#include <stdio.h>

int main()
{
    int a , b ;
    printf("Enter the two number :- ");
    scanf("%d %d",&a ,&b);
    
    if(a>b)
    {
        printf("%d is greater",a);
    }
    
    else if(a<b)
    {
        printf("%d is greater",b);
    }
    
    else 
    {
        printf("Both the numbers are equal");
    }

    return 0;
}

// 2 )

#include <stdio.h>

int main()
{
    int a , b , c ;
    printf("Enter the two number :- ");
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
        printf("Both the numbers are equal");
    }

    return 0;
}

//3 )

#include <stdio.h>

int main()
{
    int a ,b ,c ,d ,e ;    
    
    printf("Enter 5 numbers.");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    
    if(a>b && a>c && a>d && a>e)
    {
        printf("%d is greater",a);
    }
    else if(b>a && b>c && b>d && b>e)
    {
        printf("%d is greater",b);
    }
    else if(c>a && c>b && c>d && c>e)
    {
        printf("%d is greater",c);
    }
     else if(d>a && d>c && d>b && d>e)
    {
        printf("%d is greater",d);
    }
    else
    {
       printf("%d is greater",e); 
    }
    return 0;
}
//4 )

#include <stdio.h>

int main()
{
    int a ,b ,c ,d ,e, f, g, h, i, j;    
    
    printf("Enter 10 numbers.");
    scanf("%d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
    
    if(a>b && a>c && a>d && a>e && a>f && a>g && a>h && a>i && a>j)
    {
        printf("%d is greater",a);
    }
    else if(b>a && b>c && b>d && b>e && b>f && b>g && b>h && b>i && b>j)
    {
        printf("%d is greater",b);
    }
    else if(c>a && c>b && c>d && c>e && c>f && c>g && c>h && c>i && c>j)
    {
        printf("%d is greater",c);
    }
    else if(d>a && d>c && d>b && d>e && d>f && d>g && d>h && d>i && d>j)
    {
        printf("%d is greater",d);
    }
    else if(e>a && e>c && e>b && e>d && e>f && e>g && e>h && e>i && e>j)
    {
        printf("%d is greater",e);
    }
    else if(f>a && f>c && f>b && f>e && f>d && f>g && f>h && f>i && f>j)
    {
        printf("%d is greater",f);
    }
    else if(g>a && g>c && g>b && g>e && g>f && g>d && g>h && g>i && g>j)
    {
        printf("%d is greater",g);
    }
    else if(h>a && h>c && h>b && h>e && h>f && h>g && h>d && h>i && h>j)
    {
        printf("%d is greater",h);
    }
    else if(i>a && i>c && i>b && i>e && i>f && i>g && i>h && i>d && i>j)
    {
        printf("%d is greater",i);
    }
    else
    {
       printf("%d is greater",j); 
    }
    return 0;
}	

//5 )

#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number == 1) {
        printf("one\n");
    } else if (number == 2) {
        printf("two\n");
    } else if (number == 3) {
        printf("three\n");
    } else if (number == 4) {
        printf("four\n");
    } else if (number == 5) {
        printf("five\n");
    } else {
        printf("not match\n");
    }

    return 0;
}

//6 )

#include <stdio.h>

int main() {
    int number;

    printf("Enter a number (1-7): ");
    scanf("%d", &number);

    if (number == 1) {
        printf("sun\n");
    } else if (number == 2) {
        printf("mon\n");
    } else if (number == 3) {
        printf("tue\n");
    } else if (number == 4) {
        printf("wed\n");
    } else if (number == 5) {
        printf("th\n");
    } else if (number == 6) {
        printf("fri\n");
    } else if (number == 7) {
        printf("sat\n");
    } else {
        printf("not match\n");
    }

    return 0;
}

// 7 )

#include <stdio.h>

int main() {
    int number;

    printf("Enter a number (1-12): ");
    scanf("%d", &number);

    if (number == 1) {
        printf("jan\n");
    } else if (number == 2) {
        printf("feb\n");
    } else if (number == 3) {
        printf("march\n");
    } else if (number == 4) {
        printf("april\n");
    } else if (number == 5) {
        printf("may\n");
    } else if (number == 6) {
        printf("june\n");
    } else if (number == 7) {
        printf("july\n");
    } else if (number == 8) {
        printf("aug\n");
    } else if (number == 9) {
        printf("sep\n");
    } else if (number == 10) {
        printf("oct\n");
    } else if (number == 11) {
        printf("nov\n");
    } else if (number == 12) {
        printf("dec\n");
    } else {
        printf("not match\n");
    }

    return 0;
}

// 8 )
#include <stdio.h>

int main() {
    char character;

    printf("Enter a character a, b, c, d :- ");
    scanf(" %c", &character); 
    if (character == 'a') {
        printf("apple\n");
    } else if (character == 'b') {
        printf("ball\n");
    } else if (character == 'c') {
        printf("cat\n");
    } else if (character == 'd') {
        printf("dog\n");
    } else {
        printf("no match\n");
    }

    return 0;
}

// 9 )

#include <stdio.h>

int main() {
    char operation;
    float num1, num2, result;

    printf("Enter an operation : ");
    scanf(" %c", &operation);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    if (operation == 'a') {
        result = num1 + num2;
        printf("Addition: %.2f\n", result);
    } else if (operation == 's') {
        result = num1 - num2;
        printf("Subtraction: %.2f\n", result);
    } else if (operation == 'm') {
        result = num1 * num2;
        printf("Multiplication: %.2f\n", result);
    } else if (operation == 'd') {
        result = num1 / num2;
        printf("Division: %.2f\n", result);
    } else if (operation == 'o') {
        result = num1 % num2;
        printf("Modular: %.2f\n", result);
    } else {
        printf("No match \n");
    }

    return 0;
}

// 10 )

#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are eligible to vote");
    } else {
        printf("You are not eligible to vote.");
    }

    return 0;
}

// 11 )

#include <stdio.h>

int main() {
    char choice;

    printf("Enter a character (m, w, e, o, c, a, v, t): ");
    scanf(" %c", &choice); // Note the space before %c to consume the newline character

    if (choice == 'm') {
        int month;
        printf("Enter a number for the month: ");
        scanf("%d", &month);

        if (month >= 1 && month <= 12) {
            printf("Valid month\n");
        } else {
            printf("Invalid month\n");
        }
    } else if (choice == 'w') {
        int week;
        printf("Enter a number for the week: ");
        scanf("%d", &week);

        if (week >= 1 && week <= 7) {
            printf("Valid week\n");
        } else {
            printf("Invalid week\n");
        }
    } else if (choice == 'e') {
        int number;
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number % 2 == 0) {
            printf("%d is an even number\n", number);
        } else {
            printf("%d is not an even number\n", number);
        }
    } else if (choice == 'o') {
        int number;
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number % 2 != 0) {
            printf("%d is an odd number\n", number);
        } else {
            printf("%d is not an odd number\n", number);
        }
    } else if (choice == 'c') {
        char operation;
        printf("Enter a calculator operation (a, s, m, d, o): ");
        scanf(" %c", &operation);

        int num1, num2, result;
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
    } else if (choice == 'a') {
        int age;
        printf("Enter your age: ");
        scanf("%d", &age);

        if (age >= 18) {
            printf("You are eligible to vote!\n");
        } else {
            printf("You are not eligible to vote yet.\n");
        }
    } else if (choice == 'v') {
        char character;
        printf("Enter a character: ");
        scanf(" %c", &character); // Note the space before %c to consume the newline character

        if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' ||
            character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U') {
            printf("%c is a vowel\n", character);
        } else {
            printf("%c is a consonant\n", character);
        }
    } else if (choice == 't') {
        int num1, num2, num3;
        printf("Enter three numbers: ");
        scanf("%d %d %d", &num1, &num2, &num3);

        int max = num1;

        if (num2 > max) {
            max = num2;
        }

        if (num3 > max) {
            max = num3;
        }

        printf("Maximum number: %d\n", max);
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}

//12 )

#include <stdio.h>

int main()
{ 
    char operation , area , volume ;
    float base , height , side , length , breadth , radius;
    
    printf("To calculate area enter 'a' to calculate volume enter 'v':- ");
    scanf(" %c", &operation);
    
    if(operation == 'a')
    {
        printf("To calculate area of triangle enter 't', square enter 's', rectangle enter 'r', circle enter 'c' :- ");
        scanf(" %c",&area);
        if(area == 't')
        {
           printf("Enter the base and height of a triangle:-");
           scanf("%f %f", &base , &height);
           
           printf("Area of the triangle :- %f ", 0.5*base*height);
        }
        else if(area == 's')
        {
            printf("Enter the side of square :-");
            scanf("%f", &side);
            
            printf("Area of square :- %f", side*side);
        }
        else if(area == 'r')
        {
            printf("Enter the length and breadth of the rectangle");
            scanf("%f %f", &length , &breadth);
            
            printf("Area of the rectangle :- %f", length*breadth);
        }
        else if(area == 'c')
        {
            printf("Enter the radius of a circle :-");
            scanf("%f", &radius);
            
            printf("The area of circle is :- %f", 3.14*radius*radius);
        }
        else
        {
            printf("Invalid operation");
        }
    }
    else if(operation == 'v')
    {
        printf("To calculate volume of cylinder enter 'c', cuboid enter 'u', sphere enter 's',for circumference of the circle enter 'p' :- ");
        scanf(" %c",&volume);
        if(volume == 'c')
        {
        printf("Enter the value of height and radius of the cylinder");
        scanf("%f %f ",&height,&radius);
        
        printf("volume of the cylinder is :- %f",3.14*radius*radius*height);
        }
        else if(volume == 'u')
        {
        printf("Enter the length breadth height of the cuboid respectively :- ");
        scanf("%f %f %f",&length ,&breadth ,&height);
        
        printf("Volume of cuboid is :- %f", length*breadth*height);
        }
        else if(volume == 's')
        {
            printf("Enter the radius of the sphere :-");
            scanf("%f",&radius);
            
            printf("Volume of sphere is :- %f" , (4*3.14*radius*radius*radius)/3);
        }
        else if(volume == 'p')
        {
            printf("Enter the radius of the circle in order to calculate its circumference");
            scanf("%f",&radius);
            
            printf("circumference of the circle is %f", 2*3.14*radius);
        }
        
        else
        {
            printf("Invalid Operation");
        }
    }
    else
    {
        printf("Invalid operation");
    }

    return 0;
}

// 13 )

#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number >= 30 && number <= 56) {
        printf("This value is between 30 to 56\n");
    } else if (number >= 78 && number <= 89) {
        printf("This value is between 78 to 89\n");
    } else if (number >= 12 && number <= 29) {
        printf("This value is between 12 to 34\n");
    } else {
        printf("Not match\n");
    }

    return 0;
}
*/

// 14 )

#include <stdio.h>

int main() {
    int score;

    printf("Enter the score: ");
    scanf("%d", &score);

    if (score >= 90 && score <= 100) {
        printf("A\n");
    } else if (score >= 80 && score < 90) {
        printf("B\n");
    } else if (score >= 70 && score < 80) {
        printf("C\n");
    } else if (score >= 60 && score < 70) {
        printf("D\n");
    } else {
        printf("Invalid score\n");
    }

    return 0;
}
 


