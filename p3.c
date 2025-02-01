#include<stdio.h>
void main(){
    int num,num2;
    printf("enter the no1: ");
    scanf("%d",&num);
    printf("enter the no2: ");
    scanf("%d",&num2);
    switch (num>num2)
    {
    case 1: printf("%d",num);
        /* code */
        break;
    
    default:printf("%d",num2);
        break;
    }
}