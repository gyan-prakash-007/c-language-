#include<stdio.h>
int main (){
    int x , y , z ;
    printf("enter the first angle ");
    scanf("%d", &x);
     printf("enter the second angle ");
    scanf("%d", &y);
     printf("enter the third angle ");
    scanf("%d", &z);
     
     if (x+y+z != 180)
     {
        printf("is not a tringle");
     } else {
        printf("is a triangle");
     }
     return 0 ;
     

}