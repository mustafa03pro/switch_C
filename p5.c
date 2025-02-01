#include<stdio.h>
void main(){
    char ch;
    printf("enter the charecter: ");
    scanf(" %c",&ch);
    if((ch>='A'&&ch<='Z'))
    {
        ch+=32;
    }
    else if(ch>='a'&&ch<='z'){
        switch (ch)
        {
        case 'a':case 'e':case 'i':case 'o':case 'u': printf("vowel");
                /* code */
        break;
            
        default:printf("consonent");
            break;
        }
    }
    else{
            printf("its special charecter");
    }
        
            

    
    
        
    
}
    