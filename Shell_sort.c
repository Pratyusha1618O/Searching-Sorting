/* A program to implement shell sort */
#include<stdio.h>

void print(int a[],int n)
{
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}printf("\n");
}

void shellSort(int a[], int n)
{
	int i,j,inc,temp;
	inc = (int) (n/2)-1;
	while(inc>0)
	{
		for(i=inc; i<n; i++)
		{
			temp = a[i];
			j = i;
			while(j>=inc && (j-inc)>temp)
			{
				a[j] = a[j-inc];
			}
			a[j] = temp;
		}
		inc = inc/2;
	}
}
int main()
{
	int a[25],n,i;
	printf("Enter the no of elements: ");
	scanf("%d",&n);
	printf("Enter array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	shellSort(a,n);
	printf("Sorted Array: ");
	print(a,n);
	
}
