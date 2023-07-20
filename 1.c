#include<stdio.h>>
int main()
{
    int a,b,c;
    printf("Enter the value: ");
    scanf("%d %d %d", &a,&b,&c);
    if(a>b && a>c)
    {
        printf("a is max");
    }
    else if(b>a && b>c)
    {
        printf("b is max");
    }
    else if(c>a && c>b)
    {
        printf("c is max");
    }
    else{
        printf("all the numbers are equal");
    }
	return 0;
}