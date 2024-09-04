#include<stdio.h>

void selectionSort(int *a, int n)
{
	int i,j,indexofMin,temp;
	printf("::Selection Sort::\n");
	for(i=0; i<n; i++)
	{
		indexofMin = i;
		for(j=i+1; j<n; j++)
		{
			if(a[j] < a[indexofMin]){
				indexofMin = j;
			}
		}
		//swap a[i] and a[indexofMin]
		temp = a[i];
		a[i] = a[indexofMin];
		a[indexofMin] = temp;
	}
}

void printArr(int *a, int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}printf("\n");
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
	
	printArr(a,n);
	selectionSort(a,n);
	printArr(a,n);
	
	return 0;
}
/*
Enter the no. of elements: 5
enter array elements: 8
0
5
7
1
8 0 5 7 1
::Selection Sort::
0 1 5 7 8


*/
