#include<stdio.h>

int main()
{
	int a[10],low,high,mid,elem,n,i,searchIndex;
	printf("Enter The no of elements: ");
	scanf("%d",&n);
	printf("Enter array elements(in sorted order): ");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter value to find: ");
	scanf("%d",&elem);
	
	low = 0;
	high = n-1;
	mid = (low+high)/2;
	while(low <= high)
	{
		if(a[mid] < elem){
			low = mid+1;
		}
		else if(a[mid] == elem){
			printf("%d found at index %d\n",elem,mid);
			break;
		}
		else{
			high = mid-1;
		}
		mid = (low+high)/2;
	}
	if(low > high){
		printf("Not found! %d isn't present in the list\n",elem);
	}
	return 0;
}
/*
Enter The no of elements: 5
Enter array elements: 10
20
30
40
50
Enter value to find: 40
40 found at location 3
*/
