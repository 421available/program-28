#include<stdio.h>
void main()
{
		int n, reverse=0,reminder,original;
	printf("Enter an integer:");
	scanf("%d",&n);
	original = n;
	while(n!=0)
	{
		reminder=n%10;
		reverse = reverse * 10+ reminder;
		n/=10;
	}
	if(original==reverse)
	printf("%d is a palindrom,",original);
	else
	printf("%d is not palindrom.",original);
}
