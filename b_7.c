#include<stdio.h>
#include<math.h>
int main (){
    float x ;
    printf(" enter the number ");
    scanf("%f", &x);
    if (x>=0)
    {
        printf("the required number is %f", x);
    } else {
        printf("the required number is %f", x*(-1));
    }
    return 0 ;

    
}