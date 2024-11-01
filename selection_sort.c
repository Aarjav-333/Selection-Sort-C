#include <stdio.h>
int main()
{
	int i,j,n,temp;
	printf("Enter the size of the array\n");
	scanf("%d" , &n);
	int array[n];
	printf("\nEnter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("\nArray\n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",array[i]);
	}
	for(i=0;i<n-1;i++)
	{
		int min = i;
		for(j=i+1;j<n;j++)
		{
			if(array[j] < array[min])
			{
				min = j;
			}
		}
		if(min!=i)
		{
			temp = array[min];
			array[min] = array[i];
			array[i] = temp;
		}
	}
	printf("\nSorted array\n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",array[i]);
	}
	return 0;
}
			
