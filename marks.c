#include <stdio.h>
int main()
{
    int a , b , c,d , e , total , average ;
    printf("Enter value\n");
    scanf("%d %d %d %d %d" , &a ,&b ,&c ,&d ,&e);
    total = a+b+c+d+e ;
    average = total/5;
    printf("average/percentage = %d \n" , average);
    printf("total = %d \n" , total );
    if (a<40 || b<40 || c<40 || d<40 || e<40)
    {
        printf("Fail/Back\n");
    }
    else 
    {
        printf("Pass");
    }
    if (average>=25 && average<40)
    {
        printf("D");
    }
   else if (average>=40 && average<60)
    {
        printf("C");
    }
   else if (average>=60 && average<80)
    {
        printf("B");
    }
  else if (average>=80 && average<=100)
    {
        printf("A");
    }
    else
    {
        printf("value is not correct");
    }
    return 0;
}