#include<stdio.h>
int main(){
    int num =161;
    int rem,sum=0;
    int temp=num;
    while(num>0){
        rem =num%10;
        sum =sum+rem*rem*rem;
        num=num/10;

    }
    if(temp==sum){
        printf("Number is armstrong");
    }
    else{
        printf("not armstrong");
    }
    return 0;
}