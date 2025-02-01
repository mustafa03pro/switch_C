#include<stdio.h>
void main(){
    int num;
    printf("enter the no: ");
    scanf("%d",&num);
    switch (num%2==0)
    {
    case 1: printf("enen");
        /* code */
        break;
    
    default:printf("odd");
        break;
    }
}