#include<stdio.h>
int main (){
   int side_1 , side_2 , side_3 ;
   printf("enter the first side ");
   scanf("%d", &side_1);
   printf("enter the first side ");
   scanf("%d", &side_2);
   printf("enter the first side ");
   scanf("%d", &side_3);
   /* Euilateral triangle = all sides equal 
   isosceles triangle =2 sides equal 
   scalen triangle = no sides equal 
   */

   if (side_1== side_2 && side_2==side_3 && side_3==side_1)
   {
      printf("equilateral tirangle");
   }
    else if (side_1==side_2|| side_2==side_3|| side_3==side_1)
    {
      printf("isosceles triangle");
    } else {
      printf("scalen triangle");
    }
    
    return 0 ;

}