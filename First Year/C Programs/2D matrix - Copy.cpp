#include <stdio.h>
int main()
{
	int arr[10][10],i,j,r,c;
	printf("Enter number of rows:");
	scanf("%d",&r);
	printf("Enter number of column:");
	scanf("%d",&c);
	printf("Enter elements in the matrix:\n");
	for (i=0;i<=(r-1);i++)
	{
		for(j=0;j<=c-1;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for (i=0;i<=r-1;i++)
	{
		for(j=0;j<=c-1;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
return 0;			
}