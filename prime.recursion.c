#include<stdio.h>
int prime(int n);
int main()
{
	int num,result;
	printf("ENTER THE NUMBER WHICH IS TO BE CHECKED FOR A PRIME NUMBER : \n");
	scanf("%d",&num);
	result = prime(num);
	if(result == 0)
	{
	printf("THE NUMBER ENTERED IS PRIME");
    }
    else
    {
	printf("THE NUMBER ENTERED IS NOT PRIME");
    }
	
}

int prime(int num)
{
	int ctr,i;
	ctr=0;
	for (i=2 ; i<num ; i++ )
	{
		if((num %i)== 0)
		{
			ctr++;
		}
	}
	if (ctr == 0)
	return 0;
	else
	return 1;
}
