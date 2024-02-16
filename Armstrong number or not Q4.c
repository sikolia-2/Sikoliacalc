#include <stdio.h>
#include <math.h>

/*
Author: Fedley Sikolia
ID: ENE212-0183/2021
*/

// Function to count the number of digits in a number
int countDigits(int n) {
    int count = 0;
    while (n != 0) {
        n /= 10;
        ++count;
    }
    return count;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int n) {
    int numDigits = countDigits(n);
    int originalNumber = n;
    int sum = 0;
    
    while (n != 0) {
        int digit = n % 10;
        sum += pow(digit, numDigits);
        n /= 10;
    }
    
    if (sum == originalNumber)
        return 1; // Armstrong number
    else
        return 0; // Not an Armstrong number
}

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Check if the number is an Armstrong number
    if (isArmstrong(number))
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);
    
    return 0;
}
