#include <stdio.h>

int main() {
    int a;
    int rem, sum=0;
    printf("enter the number: ");
    scanf("%d", &a);
    while(a>0)
    {
        rem=a%10;
        sum=sum*10+rem;
        a=a/10;
    }
    printf("the reverse number is: %d", sum);
    
    return 0;
}
