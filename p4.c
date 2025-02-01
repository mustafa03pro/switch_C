#include<stdio.h>
void main(){
    int num,num2,op;
    printf("enter the no: ");
    scanf("%d",&num);
    printf("enter the no: ");
    scanf("%d",&num2);
    printf("----------------------------------------------------------\n");
    printf("1)+\n");
    printf("2)-\n");
    printf("3)*\n");
    printf("4)/\n");
    printf("select one option: ");
    scanf("%d",&op);
    switch (op)
    {
    case 1: printf("sum=%d",num+num2);
        /* code */
        break;
    case 2: printf("sub=%d",num-num2);
        /* code */
        break;
    case 3: printf("mul=%d",(num*num2));
        /* code */
        break;
    case 4: printf("div=%d",num/num2);
        /* code */
        break;
    default:printf("invalid option");
        break;
    }
}