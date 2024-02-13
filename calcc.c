/*
Author: FEDLEY SIKOLIA
ID: ENE212-0183/2021
*/

#include <stdio.h>

// Function to add two numbers
float add(float num1, float num2) {
    return num1 + num2;
}

// Function to subtract two numbers
float subtract(float num1, float num2) {
    return num1 - num2;
}

int main() {
    float num1, num2;
    
    printf("Enter first number: ");
    scanf("%f", &num1);
    
    printf("Enter second number: ");
    scanf("%f", &num2);
    
    printf("Sum: %.2f\n", add(num1, num2));
    printf("Difference: %.2f\n", subtract(num1, num2));
    
    return 0;
}