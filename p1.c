
// 1. Problem Statement:
// Write a C program that takes a month number (1-12) as input from the user and prints the number of days in that month using a switch statement. 
// If the user enters a number outside the range of 1-12, the program should display an error message.
#include<stdio.h>
void main(){
    int month;
    printf("enetr the no");
    scanf("%d",&month);
    switch (month)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:printf("31 dayes in this month");
        /* code */
        break;
    case 4: case 6: case 9: case 11:printf("30 dayes in this month");
        /* code */
        break;
    case 2:printf("28-29 dayes in this month");
        /* code */
        break;
    
    default:printf("invalid month");
        break;
    }
}