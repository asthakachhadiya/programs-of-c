#include <stdio.h>

int main() {
    float num;
    int integralPart;
    int rightmostDigit;

    // Prompt the user to enter a floating-point number
    printf("Enter a floating-point number: ");
    
    // Read the floating-point number from the user
    scanf("%f", &num);

    // Extract the integral part of the number by typecasting to an int
    integralPart = (int)num;

    // Calculate the rightmost digit of the integral part using the modulus operator
    // The modulus operator (%) gives the remainder when integralPart is divided by 10,
    // which is the last digit.
    rightmostDigit = integralPart % 10;

    // Handle negative numbers correctly: if the integral part is negative,
    // the modulus operator might return a negative result.
    // Take the absolute value to get the digit.
    if (rightmostDigit < 0) {
        rightmostDigit = -rightmostDigit;
    }

    // Display the rightmost digit of the integral part
    printf("The rightmost digit of the integral part is: %d\n", rightmostDigit);

    return 0;
}