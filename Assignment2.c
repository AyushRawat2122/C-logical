/*
//print these numbers charachters or decimal values

#include <stdio.h>

int main() {
    int a = 23;
    int b = 65;
    int c = -23;
    float d = 1.56;
    float e = 0.8;
    float f = -2.752;
    char g = 't';
    int h = 123456;
    char i = 'o';

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%.2f\n", d);
    printf("%.1f\n", e);
    printf("%.3f\n", f);
    printf("%c\n", g);
    printf("%d\n", h);
    printf("%c\n", i);

    return 0;
}


// output 2+6+1 +5+78+12

#include <stdio.h>

int main() {

    int num1 = 2;
    int num2 = 6;
    int num3 = 1;
    int num4 = 5;
    int num5 = 78;
    int num6 = 12;

    int result = num1 + num2 + num3 + num4 + num5 + num6;

    printf("Sum: %d\n", result);

    return 0;
}

//output 23 * 2 - 9 + 34

#include <stdio.h>

int main() {
    
    int num1 = 23;
    int num2 = 2;
    int num3 = 9;
    int num4 = 34;

    int result = num1 * num2 - num3 + num4;

    printf("Result: %d\n", result);

    return 0;
}

//output 12+(34*2)-45

#include <stdio.h>

int main() {
    int num1 = 12;
    int num2 = 34;
    int num3 = 2;
    int num4 = 45;

    int result = num1 + (num2 * num3) - num4;
    printf("Result: %d\n", result);

    return 0;
}

//output 1.2*(34+1)/2+45

#include <stdio.h>

int main() {
    int a = 34;
    int b = 1;
    float c = 1.2;
    int d = 45;
    int e = 2;
    float result = c * (a + b) / e + d;

    printf("%.2f", result);

    return 0;
}
*/
// output 4.5*2 + 8.9*1.2 - 89/2 + 34

#include <stdio.h>

int main() {
    float num1 = 4.5;
    int num2 = 2;
    float num3 = 8.9;
    int num4 = 89;
    int num5 = 2;
    int num6 = 34;

    float result = num1 * num2 + num3 * num4 / num5 + num6;

    printf("Result: %f\n", result);

    return 0;
}


