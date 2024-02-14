//1 )

#include <stdio.h>

int main() {
    int a = 5, b = 10, temp;

    printf("Before swapping: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

//2 )

#include <stdio.h>

int main() {
    int a = 5, b = 10;

    printf("Before swapping: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

//3 )

#include <stdio.h>

int main() {
    int a = 5, b = 10;
    int max;

    if (a > b) {
        max = a;
    } else {
        max = b;
    }

    printf("Maximum of %d and %d is: %d\n", a, b, max);

    return 0;
}

//4 )

#include <stdio.h>

int main() {
    int a = 5, b = 10, c = 8;
    int max;

    if (a > b && a > c) {
        max = a;
    } else if (b > c) {
        max = b;
    } else {
        max = c;
    }

    printf("Maximum of %d, %d, and %d is: %d\n", a, b, c, max);

    return 0;
}

//5 )

#include <stdio.h>

int main() {
    int num1 = 4, num2 = 9, num3 = 2, num4 = 8, num5 = 12, num6 = 6, num7 = 7, num8 = 1, num9 = 15, num10 = 5;
    int max = num1;

    if (num2 > max) {
        max = num2;
    } else if (num3 > max) {
        max = num3;
    } else if (num4 > max) {
        max = num4;
    } else if (num5 > max) {
        max = num5;
    } else if (num6 > max) {
        max = num6;
    } else if (num7 > max) {
        max = num7;
    } else if (num8 > max) {
        max = num8;
    } else if (num9 > max) {
        max = num9;
    } else if (num10 > max) {
        max = num10;
    }

    printf("Maximum of 10 numbers is: %d\n", max);

    return 0;
}

//6 )

#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d is an even number.\n", number);
    } else {
        printf("%d is an odd number.\n", number);
    }

    return 0;
}

//7 )

#include <stdio.h>

int main()
{
    char c;
    
    printf("Enter any character: ");
    scanf("%c", &c);

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        printf("'%c' is a vowel.\n", c);
    }
    else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        printf("'%c' is a consonant.\n", c);
    }
    else
    {
        printf("'%c' is not an alphabet.\n", c);
    }

    return 0;
}

//8 )

#include <stdio.h>

int main()
{
    char c;
    printf("Enter F for female, M for male, or O for others: ");
    scanf("%c", &c);
    if (c == 'F' || c == 'f')
    {
        printf("Your gender is female.\n");
    }
    else if (c == 'M' || c == 'm')
    {
        printf("Your gender is male.\n");
    }
    else if (c == 'O' || c == 'o')
    {
        printf("Your gender is others.\n");
    }
    else
    {
        printf("Invalid input.\n");
    }
    return 0;
}

//9 )

#include <stdio.h>

int main() {
    int month;

    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    if (month >= 1 && month <= 12) {

        if (month == 1) {
            printf("January\n");
        } else if (month == 2) {
            printf("February\n");
        } else if (month == 3) {
            printf("March\n");
        } else if (month == 4) {
            printf("April\n");
        } else if (month == 5) {
            printf("May\n");
        } else if (month == 6) {
            printf("June\n");
        } else if (month == 7) {
            printf("July\n");
        } else if (month == 8) {
            printf("August\n");
        } else if (month == 9) {
            printf("September\n");
        } else if (month == 10) {
            printf("October\n");
        } else if (month == 11) {
            printf("November\n");
        } else if (month == 12) {
            printf("December\n");
        }
    } else {
        printf("Invalid input. Please enter a valid month number (1-12).\n");
    }

    return 0;
}

//10 )

#include <stdio.h>

int main() {
    int day;

    printf("Enter the day number (1-7): ");
    scanf("%d", &day);

    if (day >= 1 && day <= 7) {

        if (day == 1) {
            printf("Sunday\n");
        } else if (day == 2) {
            printf("Monday\n");
        } else if (day == 3) {
            printf("Tuesday\n");
        } else if (day == 4) {
            printf("Wednesday\n");
        } else if (day == 5) {
            printf("Thursday\n");
        } else if (day == 6) {
            printf("Friday\n");
        } else if (day == 7) {
            printf("Saturday\n");
        }
    } else {
        printf("Invalid input. Please enter a valid day number (1-7).\n");
    }

    return 0;
}

//11 )


