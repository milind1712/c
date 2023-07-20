#include <stdio.h>
int main()
{
    int a , b , c,d , e , total , average ;
    printf("Enter value\n");
    scanf("%d %d %d %d %d" , &a ,&b ,&c ,&d ,&e);
    total = a+b+c+d+e ;
    printf("total = %d \n" , total );
    average = total/5;
    printf("average/percentage = %d \n" , average);
    
    if (average>=0 && average<25)
    {
        printf("Fail");
    }
   else if (average>=25 && average<40)
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
    else {
        printf("value is not correct");
    }
    
    return 0;
}