#include <stdio.h>
void main()
{
    int a,s,count,t=1,q,p;
    char character;
    printf("Enter the symbol used in pyramid:");
    scanf("%c",&character);
    printf("Enter the height of pyramid:");
    scanf("%d",&a);
    s=a/2;

    for(count=1;count<=(a/2)+1;count++)
    {
    	
    	for(t=1;t<=s;t++)
    	{
    		printf(" ");
		}
		s=s-1;
		for(q=1;q<=(2*count)-1;q++)
		{
		    printf("%c",character);
			
		}
    	printf("\n");
    }
    	
    s=1;
	p=a;	
    for(count=(a/2)+2;count<=a;count++)
    {
    	for(t=1;t<=s;t++)
    	{
    		printf(" ");
		}
		s=s+1;
	
		
		for(q=1;q<=(p-2);q++)
		{
			printf("%c",character);
		}
		p=p-2;
		printf("\n");
	}
}
        