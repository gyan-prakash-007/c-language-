#include<stdio.h>
int main (){
    int marks ;
    printf(" enter the marks obtained :");
    scanf("%d",& marks);
    if (marks<=100 && marks>=90)
    {
        printf(" grade = o");
    } else if (marks <= 89 && marks >= 80)
    {
     printf("grade = e");
    } else if (marks>=70&& marks <=79)
    {
        printf("grade = a");
    } else if (marks>=60&& marks <=69)
    {
        printf("grade = b");
    }else if (marks>=50&& marks <=59)
    {
        printf("grade = c");
    }
    else if (marks>=40&& marks <=49)
    {
        printf("grade = d");
    } else if (marks<=40 && marks >=0)
    {
        printf("fail");
    } else 
    {

        printf("not correct marks");
    }
    return 0 ;
    
    
    
    
    
}