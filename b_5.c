#include<stdio.h>
int main (){
    int x , y ;
    printf(" enter the first number ");
    scanf("%d", &x);

    printf("enter the second number ");
    scanf("%d", &y);

    if (x%y == 0)
    {
        printf("division is possible");
    } else {
        printf("division is not possible");

    }

    return 0 ;
    
}