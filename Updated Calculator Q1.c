#include <stdio.h>

/*
Author: Fedley Sikolia
ID: ENE212-0183/2021
*/

// Function prototypes
float add(float num1, float num2);
float subtract(float num1, float num2);
float multiply(float num1, float num2);
float divide(float num1, float num2);
float modulus(float num1, float num2);
int greaterThan(float num1, float num2);
int lessThan(float num1, float num2);

int main() {
    float num1, num2;
    
    printf("Enter first number: ");
    scanf("%f", &num1);
    
    printf("Enter second number: ");
    scanf("%f", &num2);
    
    printf("Sum: %.2f\n", add(num1, num2));
    printf("Difference: %.2f\n", subtract(num1, num2));
    printf("Product: %.2f\n", multiply(num1, num2));
    printf("Quotient: %.2f\n", divide(num1, num2));
    printf("Modulus: %.2f\n", modulus(num1, num2));
    
    if(greaterThan(num1, num2)) {
        printf("%.2f is greater than %.2f\n", num1, num2);
    } else {
        printf("%.2f is not greater than %.2f\n", num1, num2);
    }
    
    if(lessThan(num1, num2)) {
        printf("%.2f is less than %.2f\n", num1, num2);
    } else {
        printf("%.2f is not less than %.2f\n", num1, num2);
    }
    
    return 0;
}

// Function to add two numbers
float add(float num1, float num2) {
    return num1 + num2;
}

// Function to subtract two numbers
float subtract(float num1, float num2) {
    return num1 - num2;
}

// Function to multiply two numbers
float multiply(float num1, float num2) {
    return num1 * num2;
}

// Function to divide two numbers
float divide(float num1, float num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf("Error: Division by zero\n");
        return 0;
    }
}

// Function to find modulus of two numbers
float modulus(float num1, float num2) {
    if (num2 != 0) {
        return (int)num1 % (int)num2;
    } else {
        printf("Error: Modulus by zero\n");
        return 0;
    }
}

// Function to check if first number is greater than second number
int greaterThan(float num1, float num2) {
    return num1 > num2;
}

// Function to check if first number is less than second number
int lessThan(float num1, float num2) {
    return num1 < num2;
}