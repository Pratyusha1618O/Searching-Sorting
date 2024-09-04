/*C program to implement heap sort*/
#include<stdio.h>
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void heapify(int a[], int n, int i) // build heap
{
	int largest,left,right;
	largest = i;
	left = 2*i + 1;
	right = 2*i + 2;
	
	if(left<n && a[left] > a[largest])
	{
		largest = left;
	}
	
	if(right<n && a[right] > a[largest])
	{
		largest = right;
	}
	
	if(largest != i)
	{
		swap(&a[i], &a[largest]);
		heapify(a, n, largest);
	}
}

void heapSort(int a[], int n) // sorting the heap 
{
	int i;
	for(i = (n/2)-1; i>=0; i--)
	{
		heapify(a, n, i);
	}
	
	for(i = n-1; i>=0; i--)
	{
		swap(&a[0], &a[i]);
		
		heapify(a, i, 0);
	}
}

void print(int a[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}printf("\n");
}

int main()
{
	int a[10],n,i;
	printf("Enter no of elements: ");
	scanf("%d",&n);
	printf("Enter array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Original Array: ");
	print(a, n);
	printf("Sorted Array: ");
	heapSort(a, n);
	print(a, n);
}
