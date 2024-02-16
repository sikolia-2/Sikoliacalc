#include <stdio.h>

/*
Author: Fedley Sikolia
ID: ENE212-0183/2021
*/

// Function to check if a number is a palindrome
int isPalindrome(int n) {
    int reversedNumber = 0, originalNumber = n;
    
    // Reverse the number
    while (n > 0) {
        int digit = n % 10;
        reversedNumber = reversedNumber * 10 + digit;
        n /= 10;
    }
    
    // Check if the reversed number is equal to the original number
    if (originalNumber == reversedNumber)
        return 1; // Palindrome
    else
        return 0; // Not a palindrome
}

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Check if the number is a palindrome
    if (isPalindrome(number))
        printf("%d is a palindrome.\n", number);
    else
        printf("%d is not a palindrome.\n", number);
    
    return 0;
}
