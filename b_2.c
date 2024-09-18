#include<stdio.h>
int main (){
    float sales ;

    printf("enter the sale amount :");
    scanf("%f", & sales);

    if (sales<500 && sales>=0)
    {
        printf("%f", 35.00 );
    } 
    else if (sales>=500 &&  sales<= 2000)
    {
        printf("%f", 0.1*sales);
    }else if (sales>=2001 &&  sales<= 5000)
    {
        printf("%f", 0.15*sales);
    }else if (sales> 5000)
    {
        printf("%f", 0.20*sales);
    }  else {
        printf("no real amount");
    }
    
    return 0  ;

}