#include<stdio.h>

void printArr(int *a, int n)
{
	int i;
	for(i=0; i<n; i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}

void insertionSort(int *a, int n)
{
	int i,j,key;
	for(i=1;i<=n-1;i++)//loop for passes
	{
		key = a[i];
		j = i-1;
		//loop for each pass
		while(j>=0 && a[j]>key){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
	}
}
int main()
{
	int a[25],n,i;
	printf("Enter the no. of elements: ");
	scanf("%d",&n);
	printf("enter array elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	printArr(a,n);
	insertionSort(a,n);
	printArr(a,n);
	return 0;
}
