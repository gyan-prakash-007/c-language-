#include<stdio.h>
int main (){
int temp ;

printf("enter temperature");
scanf("%d", &temp);

if (temp<0)
{
    printf("freezing weather");
}

else if (temp>=0 && temp <10)
{
    printf("very cold weather");
}
else if (temp>=10 && temp<20)
{
    printf("cold weather ");
} 
else if (temp >=20 && temp <30)
{
    printf("normal temp");
}
else if (temp>=30 && temp <40)
{
    printf("its hot");
} else {
    printf("its very hot");
}
return 0 ;






}