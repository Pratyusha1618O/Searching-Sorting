#include<stdio.h>

void printArr(int *a, int n)
{
	int i;
	for(i=0; i<n; i++){
		printf("%d ",a[i]);
	}
}

int partition(int a[], int low, int high)
{
	int pivot, i, j, temp;
	pivot = a[low];
	i= low+1;
	j = high;
	
	do{
		while(a[i] <= pivot){
			i++;
		}
	
		while(a[j] > pivot){
			j--;
		}
	
		if(i < j)
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}while(i<j);
	
	//swap a[low] and a[j]
	temp = a[low];
	a[low] = a[j];
	a[j] = temp;
	
	return j;
}

void quickSort(int a[], int low, int high)
{
	int partitionIndex;//index of pivot after partition
	
	if(low < high)
	{
		partitionIndex = partition(a, low, high);
		quickSort(a, low, partitionIndex-1); //sort left subarray
		quickSort(a, partitionIndex+1, high); //sort right subarray
	}
}

int main()
{
	int a[10],n,i;
	printf("Enter the no. of elements: ");
	scanf("%d",&n);
	printf("enter array elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Before sort: ");
	printArr(a,n);//before sort
	quickSort(a, 0, n-1);
	printf("\nAfter sort: ");
	printArr(a,n);//after sort
	
	return 0;
}
