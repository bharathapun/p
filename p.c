#include <stdio.h>

int main(void)
{
	int a[100],p,i;
	printf("\Enter the number of values");
	scanf("%d",&p);
	printf("\nEnter the values");
	for(i=0;i<p;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<p;i++)
	{
		if(a[i]==i)
		{
			printf("\n%d",i);
		}
	}
	
	return 0;
}
