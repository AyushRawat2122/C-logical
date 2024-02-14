//1 )
#include <stdio.h>

void add(int num1, int num2);
void sub(int num1, int num2);
void multi(int num1, int num2);
void div_func(int num1, int num2);
void mod(int num1, int num2);

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    add(num1, num2);
    sub(num1, num2);
    multi(num1, num2);
    div_func(num1, num2);
    mod(num1, num2);

    return 0;
}

void add(int num1, int num2) {
    printf("Sum: %d\n", num1 + num2);
}

void sub(int num1, int num2) {
    printf("Difference: %d\n", num1 - num2);
}

void multi(int num1, int num2) {
    printf("Product: %d\n", num1 * num2);
}

void div_func(int num1, int num2) {
        printf("Quotient: %d\n", num1 / num2);
}

void mod(int num1, int num2) {
        printf("Remainder: %d\n", num1 % num2);
}
//2 )
#include <stdio.h>

void voter(int age);
void gender(char category);
void vowel(char ch);
void three(int num);
void armstrong(int num);
void swap(int a, int b);
void palindrome(int num);
void fibonacci(int n);
void factorial(int num);
void count(int num);
void sumOfDigits(int num);
void even(int start, int end);
void odd(int start, int end);
void month(int monthNumber);
void week(int dayNumber);
void area(float radius);

int main() {
    // Example usage of the functions
    voter(20);
    gender('M');
    vowel('a');
    three(7);
    armstrong(153);

    swap(5, 10);

    palindrome(121);
    fibonacci(5);
    factorial(5);
    count(12345);
    sumOfDigits(456);
    even(45, 89);
    odd(23, 89);
    month(2);
    week(4);
    area(5.0);

    return 0;
}


void voter(int age) {
    if (age >= 18) {
        printf("Eligible to vote!\n");
    } else {
        printf("Not eligible to vote!\n");
    }
}

void gender(char category) {
    if (category == 'M' || category == 'm') {
        printf("Male\n");
    } else if (category == 'F' || category == 'f') {
        printf("Female\n");
    } else {
        printf("Other\n");
    }
}

void vowel(char ch) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Vowel\n");
    } else {
        printf("Consonant\n");
    }
}

void three(int num) {
    if (num % 3 == 0) {
        printf("%d is divisible by 3\n", num);
    } else {
        printf("%d is not divisible by 3\n", num);
    }
}

void armstrong(int num) {
    int originalNum, remainder, result = 0, n = 0;

    originalNum = num;

    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += power(remainder, n);
        originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number\n", num);
    else
        printf("%d is not an Armstrong number\n", num);
}

int power(int base, int exponent) {
    int result = 1;

    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }

    return result;
}

void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Swapped values: %d, %d\n", a, b);
}

void palindrome(int num) {
    int reversedNum = 0, remainder, originalNum;

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversedNum)
        printf("%d is a palindrome\n", originalNum);
    else
        printf("%d is not a palindrome\n", originalNum);
}

void fibonacci(int n) {
    int first = 0, second = 1, next, i;

    printf("Fibonacci series: ");

    for (i = 0; i < n; i++) {
        printf("%d, ", first);
        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
}

void factorial(int num) {
    int i;
    unsigned long long fact = 1;

    for (i = 1; i <= num; ++i) {
        fact *= i;
    }

    printf("Factorial of %d = %llu\n", num, fact);
}

void count(int num) {
    int count = 0;

    while (num != 0) {
        num /= 10;
        ++count;
    }

    printf("Number of digits: %d\n", count);
}

void sumOfDigits(int num) {
    int sum = 0, remainder;

    while (num != 0) {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }

    printf("Sum of digits: %d\n", sum);
}

void even(int start, int end) {
    printf("Even numbers between %d and %d: ", start, end);

    for (int i = start; i <= end; ++i) {
        if (i % 2 == 0) {
            printf("%d, ", i);
        }
    }

    printf("\n");
}

void odd(int start, int end) {
    printf("Odd numbers between %d and %d: ", start, end);

    for (int i = start; i <= end; ++i) {
        if (i % 2 != 0) {
            printf("%d, ", i);
        }
    }

    printf("\n");
}

void month(int monthNumber) {
    if (monthNumber == 1) {
        printf("Month: January\n");
    } else if (monthNumber == 2) {
        printf("Month: February\n");
    } else if (monthNumber == 3) {
        printf("Month: March\n");
    } else if (monthNumber == 4) {
        printf("Month: April\n");
    } else if (monthNumber == 5) {
        printf("Month: May\n");
    } else if (monthNumber == 6) {
        printf("Month: June\n");
    } else if (monthNumber == 7) {
        printf("Month: July\n");
    } else if (monthNumber == 8) {
        printf("Month: August\n");
    } else if (monthNumber == 9) {
        printf("Month: September\n");
    } else if (monthNumber == 10) {
        printf("Month: October\n");
    } else if (monthNumber == 11) {
        printf("Month: November\n");
    } else if (monthNumber == 12) {
        printf("Month: December\n");
    } else {
        printf("Invalid month number\n");
    }
}

void week(int dayNumber) {
    if (dayNumber == 1) {
        printf("Day: Sunday\n");
    } else if (dayNumber == 2) {
        printf("Day: Monday\n");
    } else if (dayNumber == 3) {
        printf("Day: Tuesday\n");
    } else if (dayNumber == 4) {
        printf("Day: Wednesday\n");
    } else if (dayNumber == 5) {
        printf("Day: Thursday\n");
    } else if (dayNumber == 6) {
        printf("Day: Friday\n");
    } else if (dayNumber == 7) {
        printf("Day: Saturday\n");
    } else {
        printf("Invalid day number\n");
    }
}

void area(float radius) {
    const float PI = 3.14159;
    float area = PI * radius * radius;
    printf("Area of the circle with radius %.2f: %.2f\n", radius, area);
}

//3 )

#include <stdio.h>


int add(void);
int sub(void);
int multi(void);
float div_func(void);
int mod(void);

int main() {

    printf("Sum: %d\n", add());
    printf("Difference: %d\n", sub());
    printf("Product: %d\n", multi());
    printf("Quotient: %.2f\n", div_func());
    printf("Remainder: %d\n", mod());

    return 0;
}


int add(void) {
    int num1, num2;
    printf("Enter two numbers for addition: ");
    scanf("%d %d", &num1, &num2);
    return num1 + num2;
}

int sub(void) {
    int num1, num2;
    printf("Enter two numbers for subtraction: ");
    scanf("%d %d", &num1, &num2);
    return num1 - num2;
}

int multi(void) {
    int num1, num2;
    printf("Enter two numbers for multiplication: ");
    scanf("%d %d", &num1, &num2);
    return num1 * num2;
}

float div_func(void) {
    int num1, num2;
    printf("Enter two numbers for division: ");
    scanf("%d %d", &num1, &num2);

    if (num2 != 0) {
        return (float)num1 / num2;
    } else {
        printf("Cannot divide by zero.\n");
        return 0;
    }
}

int mod(void) {
    int num1, num2;
    printf("Enter two numbers for modulus: ");
    scanf("%d %d", &num1, &num2);

    if (num2 != 0) {
        return num1 % num2;
    } else {
        printf("Cannot find modulus with zero.\n");
        return 0;
    }
}

//4 )

#include <stdio.h>

// Function declarations
int add();
int sub();
int multi();
float div_func();
int mod();

int voter();
char gender();
char vowel();
int three();
int armstrong();
void swap();
int palindrome();
int fibonacci();
int factorial();
int count();
int sumOfDigit();
void even();
void odd();
int month();
int week();
float area();

int main() {
    printf("Sum: %d\n", add());
    printf("Difference: %d\n", sub());
    printf("Product: %d\n", multi());
    printf("Quotient: %.2f\n", div_func());
    printf("Remainder: %d\n", mod());

    voter();
    gender();
    vowel();
    three();
    armstrong();
    swap();
    palindrome();
    fibonacci();
    factorial();
    count();
    sumOfDigit();
    even();
    odd();
    month();
    week();
    area();

    return 0;
}

// Function definitions

int add() {
    int num1, num2;
    printf("Enter two numbers for addition: ");
    scanf("%d %d", &num1, &num2);
    return num1 + num2;
}

int sub() {
    int num1, num2;
    printf("Enter two numbers for subtraction: ");
    scanf("%d %d", &num1, &num2);
    return num1 - num2;
}

int multi() {
    int num1, num2;
    printf("Enter two numbers for multiplication: ");
    scanf("%d %d", &num1, &num2);
    return num1 * num2;
}

float div_func() {
    int num1, num2;
    printf("Enter two numbers for division: ");
    scanf("%d %d", &num1, &num2);

    if (num2 != 0) {
        return (float)num1 / num2;
    } else {
        printf("Cannot divide by zero.\n");
        return 0;
    }
}

int mod() {
    int num1, num2;
    printf("Enter two numbers for modulus: ");
    scanf("%d %d", &num1, &num2);

    if (num2 != 0) {
        return num1 % num2;
    } else {
        printf("Cannot find modulus with zero.\n");
        return 0;
    }
}

int voter() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    return (age >= 18) ? 1 : 0;
}

char gender() {
    char category;
    printf("Enter gender (M/F): ");
    scanf(" %c", &category);
    return category;
}

char vowel() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        return 'V';
    } else {
        return 'C';
    }
}

int three() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return (num % 3 == 0) ? 1 : 0;
}

int armstrong() {
    int num, originalNum, remainder, result = 0, n = 0;

    printf("Enter a number for Armstrong check: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += power(remainder, n);
        originalNum /= 10;
    }

    return (result == num) ? 1 : 0;
}

void swap() {
    int a, b;
    printf("Enter two numbers for swapping: ");
    scanf("%d %d", &a, &b);
    printf("Original values: %d, %d\n", a, b);

    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("Swapped values: %d, %d\n", a, b);
}

int palindrome() {
    int num, reversedNum = 0, remainder, originalNum;

    printf("Enter a number for palindrome check: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    return (originalNum == reversedNum) ? 1 : 0;
}

int fibonacci() {
    int n;
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &n);

    int first = 0, second = 1, next, i;

    printf("Fibonacci series: ");
    for (i = 0; i < n; i++) {
        printf("%d, ", first);
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}

int factorial() {
    int num, i;
    unsigned long long fact = 1;

    printf("Enter a number for factorial: ");
    scanf("%d", &num);

    for (i = 1; i <= num; ++i) {
        fact *= i;
    }

    return fact;
}

int count() {
    int num, count = 0;

    printf("Enter a number for counting digits: ");
    scanf("%d", &num);

    while (num != 0) {
        num /= 10;
        ++count;
    }

    return count;
}

int sumOfDigit() {
    int num, sum = 0, remainder;

    printf("Enter a number for sum of digits: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }

    return sum;
}

void even() {
    int start, end;
    printf("Enter the range for even numbers: ");
    scanf("%d %d", &start, &end);

    printf("Even numbers between %d and %d: ", start, end);

    for (int i = start; i <= end; ++i) {
        if (i % 2 == 0) {
            printf("%d, ", i);
        }
    }

    printf("\n");
}

void odd() {
    int start, end;
    printf("Enter the range for odd numbers: ");
    scanf("%d %d", &start, &end);

    printf("Odd numbers between %d and %d: ", start, end);

    for (int i = start; i <= end; ++i) {
        if (i % 2 != 0) {
            printf("%d, ", i);
        }
    }

    printf("\n");
}

int month() {
    int monthNumber;
    printf("Enter the month number: ");
    scanf("%d", &monthNumber);

    if (monthNumber >= 1 && monthNumber <= 12) {
        printf("Month: %d\n", monthNumber);
        return monthNumber;
    } else {
        printf("Invalid month number\n");
        return 0;
    }
}

int week() {
    int dayNumber;
    printf("Enter the day number: ");
    scanf("%d", &dayNumber);

    if (dayNumber >= 1 && dayNumber <= 7) {
        printf("Day: %d\n", dayNumber);
        return dayNumber;
    } else {
        printf("Invalid day number\n");
        return 0;
    }
}

float area() {
    float radius;
    float PI = 3.14;

    printf("Enter the radius for area calculation: ");
    scanf("%f", &radius);

    return PI * radius * radius;
}

//5 )

#include <stdio.h>

int add(int num1, int num2);
int sub(int num1, int num2);
int multi(int num1, int num2);
float div_func(int num1, int num2);
int mod(int num1, int num2);

int main() {

    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Sum: %d\n", add(num1, num2));
    printf("Difference: %d\n", sub(num1, num2));
    printf("Product: %d\n", multi(num1, num2));

    if (num2 != 0) {
        printf("Quotient: %.2f\n", div_func(num1, num2));
        printf("Remainder: %d\n", mod(num1, num2));
    } else {
        printf("Cannot divide by zero.\n");
    }

    return 0;
}


int add(int num1, int num2) {
    return num1 + num2;
}

int sub(int num1, int num2) {
    return num1 - num2;
}

int multi(int num1, int num2) {
    return num1 * num2;
}

float div_func(int num1, int num2) {
    return (float)num1 / num2;
}

int mod(int num1, int num2) {
    return num1 % num2;
}


//6

#include <stdio.h>

int voter(int age) {
    if (age >= 18) {
        return 1; 
    } else {
        return 0;
    }
}

int gender(char gen) {
    if (gen == 'M' || gen == 'm') {
        return 1; 
    } else if (gen == 'F' || gen == 'f') {
        return 2;
    } else {
        return 0;
    }
}

int isVowel(char ch) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        return 1;
    } else {
        return 0;
    }
}

int isDivisibleByThree(int num) {
    if (num % 3 == 0) {
        return 1;
    } else {
        return 0; 
    }
}

int isArmstrong(int num) {
    int originalNum = num;
    int remainder, result = 0;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }

    if (result == num) {
        return 1; 
    } else {
        return 0;
    }
}

void swap(int num1, int num2) {
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    int temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
}

int isPalindrome(char str[]) {
    int i, len;
    int isPalindrome = 1;

    len = 0;
    while (str[len] != '\0') {
        len++;
    }

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        return 1; 
    } else {
        return 0; 
    }
}

int fibonacci(int n) {
    int first = 0, second = 1, next, i;

    printf("Fibonacci Series: %d, %d, ", first, second);

    for (i = 2; i < n; i++) {
        next = first + second;
        printf("%d, ", next);
        first = second;
        second = next;
    }

    printf("\n");
    return 0;
}

unsigned long long factorial(int n) {
    unsigned long long fact = 1;

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact;
}

int countDigits(int num) {
    int digit, count = 0;

    while (num != 0) {
        digit = num % 10;
        count++;
        num /= 10;
    }

    return count;
}

int sumOfDigit(int num) {
    int digit, sum = 0;

    while (num != 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    return sum;
}

int isEven(int num) {
    if (num % 2 == 0) {
        return 1; 
    } else {
        return 0; 
    }
}

int isOdd(int num) {
    if (num % 2 != 0) {
        return 1; 
    } else {
        return 0; 
    }
}

void printMonth(int month) {
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
    } else {
        printf("Invalid month\n");
    }
}

void printDayOfWeek(int day) {
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
    } else {
        printf("Invalid day\n");
    }
}

float calculateAreaOfCircle(float radius) {
    return 3.14159 * radius * radius;
}

int main() {
    ]
    int age = 25;
    int genResult = gender('M');
    int vowelResult = isVowel('A');
    int divisibleByThreeResult = isDivisibleByThree(9);
    int armstrongResult = isArmstrong(153);
    int num1 = 10, num2 = 20;
    int palindromeResult = isPalindrome("level");
    int n = 5;
    
    printf("Age: %d - %s\n", age, (voter(age) ? "Eligible to vote" : "Not eligible to vote"));
    printf("Gender: %s\n", (genResult == 1 ? "Male" : (genResult == 2 ? "Female" : "Invalid")));
    printf("Is 'A' a vowel? %s\n", (vowelResult ? "Yes" : "No"));
    printf("Is 9 divisible by 3? %s\n", (divisibleByThreeResult ? "Yes" : "No"));
    printf("Is 153 an Armstrong number? %s\n", (armstrongResult ? "Yes" : "No"));
    
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2);
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
    
    printf("Is 'level' a palindrome? %s\n", (palindromeResult ? "Yes" : "No"));
    
    printf("Fibonacci Series for n = %d:\n", n);
    fibonacci(n);
    
    printf("Factorial of 5: %llu\n", factorial(5));
    
    printf("Number of digits in 12345: %d\n", countDigits(12345));
    
    printf("Sum of digits in 987: %d\n", sumOfDigit(987));
    
    printf("Is 10 even? %s\n", (isEven(10) ? "Yes" : "No"));
    printf("Is 15 odd? %s\n", (isOdd(15) ? "Yes" : "No"));
    
    printf("Month 3: ");
    printMonth(3);
    
    printf("Day 5: ");
    printDayOfWeek(5);
    
    printf("Area of circle with radius 4.5: %.2f\n", calculateAreaOfCircle(4.5));
    
    return 0;
}
