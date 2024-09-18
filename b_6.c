#include<stdio.h>
#include<math.h>
int main (){
float x , y ;
printf(" enter the number ");
scanf("%d",&x);

 if (x == 0)
 {
    printf("not possible");
 } else {
     y = (1/x);
     x = sin (y);

 printf("the reuired value is: %d", x);

 }
 
 return 0 ;
}