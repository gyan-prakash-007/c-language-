#include<stdio.h>
int main (){
    int x ;
    printf("enter the month number ");
    scanf("%d", &x);

    if (x == 1)
    {
        printf("january");
    } else if (x==2)
    {
        printf("february");
    }else if (x==3)
    {
        printf("march");
    }else if (x==4)
    {
        printf("april");
    }else if (x==5)
    {
        printf("may");
    }else if (x==6)
    {
        printf("june");
    }else if (x==7)
    {
        printf("july");
    }else if (x==8)
    {
        printf("august");
    }else if (x==9)
    {
        printf("september");
    }else if (x==10)
    {
        printf("october");
    }else if (x==11)
    {
        printf("november");
    }else if (x==12)
    {
        printf("december");
    } 
    else {
        printf("invalid");
    }

    return 0 ;
    
    
    
    
    
    }