#include<stdio.h>

void printArr(int *a,int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}

void merge(int a[], int mid, int low, int high)
{
	int i, j, k, b[25];
	i = low;
	j = mid+1;
	k = low;
	
	while(i<=mid && j<=high)
	{
		if(a[i]<a[j])
		{
			b[k] = a[i];
			i++;
			k++;
		}
		else
		{
			b[k] = a[j];
			j++;
			k++;
		}
	}
	while(i <= mid)
	{
		b[k] = a[i];
		k++;
		i++;
	}
	while(j <= high)
	{
		b[k] = a[j];
		k++;
		j++; 
	}
	for(i=low; i<=high; i++)
	{
		a[i] = b[i];
	}
}

void mergeSort(int a[], int low, int high)
{
	int mid;
	if(low<high)
	{
		mid = (low+high)/2;
		mergeSort(a, low, mid);
		mergeSort(a, mid+1, high);
		merge(a, mid, low, high);
	}
}
int main()
{
	int a[] = {9,1,4,14,4,15,6};
	int n=7;
	printArr(a,n);
	mergeSort(a,0,6);
	printArr(a,n);
	return 0;
}


