/*Olivia is a firm believer that a number's luck factor is revealed by the sum of its digits. 



Develop a program to assist her in decoding the luck level of a given four-digit number. The program should take the four-digit number as input, calculate the sum of its digits using arithmetic operators, and display the luck factor.

Input format :
The input is an integer n, representing a four-digit number.

Output format :
The output displays the luck factor, which is the sum of the individual digits.*/


#include <stdio.h>

int main() {
    int number, sum = 0;
    scanf("%d", &number);
    sum = (number % 10) + ((number / 10) % 10) + ((number / 100) % 10) + (number / 1000);
    printf("%d", sum);
    return 0;
}
