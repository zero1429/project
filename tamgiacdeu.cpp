#include <stdio.h>

int main()
{
	int i;
	i = 0;
	printf("Enter no. of rows :");
	scanf("%d", &i);
	printf("\n");
	for (int j=1;j<=i;j++)
	{
		for(int k=1;k<=i-j;k++)
			printf(" ");
		
		for(int k=1;k<=2*j-1;k++)
			printf("*");
		
		printf("\n");
	}
	return 0;
}


