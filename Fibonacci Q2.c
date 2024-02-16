#include <stdio.h>

/*
Author: Fedley Sikolia
ID: ENE212-0183/2021
*/

void fibonacci(int n) {
    int num1 = 0, num2 = 1, nextTerm;
    
    printf("Fibonacci Series up to %d terms:\n", n);
    
    for (int i = 0; i < n; ++i) {
        if (i <= 1)
            nextTerm = i;
        else {
            nextTerm = num1 + num2;
            num1 = num2;
            num2 = nextTerm;
        }
        printf("%d, ", nextTerm);
    }
}

int main() {
    int n;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    fibonacci(n);
    
    return 0;
}
