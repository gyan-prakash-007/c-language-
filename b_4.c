#include<stdio.h>
int main (){
    float  x ,y;
    printf("enter the x cordinate ");
    scanf("%f", &x);

    printf("enter the y cordinate ");
    scanf("%f", &y);

    if (x>=0 && y>=0)
    {
        printf("first codrant");

    } else if (x<0 && y>0)
    {
        printf("second quadrant");
    } else if (x<0 && y<0)
    {
        printf("third quadrant");
    } else {
        printf("fourth quadrant");
    }
    
    return 0 ;
    
     
}