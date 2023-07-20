#include<stdio.h>
int main()
{
	char c;
	printf("Enter the alphabet: ", c);
	scanf("%c", &c);
	if(c=='a' || c=='i' || c=='e' || c=='o' || c=='u')
	{
		printf("The alphabet is vowel");
	}
		else
		{
		
		
			printf("The alphabet is consonant");
		
	}
	return 0;
	
}