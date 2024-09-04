#include<stdio.h>

void printArr(int *a, int n)
{
	int i;
	for(i=0; i<n; i++){
		printf("%d ",a[i]);
	}
}
void bubbleSort(int *a,int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)//for no of passes
	{
		for(j=0;j<n-1-i; j++)//for comparison in each pass
		{
			if(a[j]>a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
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
	bubbleSort(a,n);//bubble sort
	printf("\nAfter sort: ");
	printArr(a,n);//after sort
	
	return 0;
}
/*
Enter the no. of elements: 5
enter array elements: 24
15
98
54
76
Before sort: 24 15 98 54 76
After sort: 15 24 54 76 98

*/
