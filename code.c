/*
(Problem)
Chef rented a car for a day.

Usually, the cost of the car is Rs 1010 per km. However, since Chef has booked the car for the whole day, he needs to pay for at least 300300 kms even if the car runs less than 300300 kms.

If the car ran XX kms, determine the cost Chef needs to pay.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of a single integer XX - denoting the number of kms Chef travelled. */

#include<stdio.h>
int main(){
    
    int T; // Num of test cases
    scanf("%d", &T);
    
    int X; //  denotes the num of km travelled
    int Y; // Cost that the chef needs to pay

    while(T--){
    scanf("%d", &X);
    
    if (X<=300){
        printf("3000 \n");
    } else {
        printf("%d \n", X*10);
    }}
    return 0;
    
}
