#include<stdio.h>
int main()
{
	int num;
	
	printf("enter the num: ");
	scanf("%d", &num);
	
	if(num==5 || num==7 || num==13 || num==45)
	{
		printf("valid");
	}
	else {
	    printf("not valid");
	}

	return 0;
}  
 