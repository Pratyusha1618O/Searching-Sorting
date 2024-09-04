#include<stdio.h>

int linearSearch(int a[], int n, int elem)
{
	int i;
	for(i=0; i<n; i++)
	{
		if(a[i] == elem)
			return i;
	}
	return -1;
}

int main()
{
	int i,n,a[10],elem,searchIndex;
	printf("Enter the no of elements: ");
	scanf("%d",&n);
	printf("Enter array elements: ");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element to search: ");
	scanf("%d",&elem);
	searchIndex = linearSearch(a,n,elem);
	
	if(searchIndex == -1)
		printf("%d not found",elem);
	else
		printf("%d id found at the index %d",elem,searchIndex);
		
	return 0;
}
