/* 
	(II) Write a program to implement binary search.
*/
#include <stdio.h>

int a[50], n, item, loc, beg, mid, end, i;

void binary_search()
{
/* Binary Search Logic */
	beg = 0;
	end = n-1;
	mid = (beg + end) / 2;
	while ((beg<=end) && (a[mid]!=item))
	{
		if (item < a[mid])
		{
			end = mid - 1;
		}
		else
		{
			beg = mid + 1;
		}
		mid = (beg + end) / 2;
	}
	if (a[mid] == item)
	{
		printf("\nITEM found at location %d\n\n", mid+1);
	}
	else
	{
		printf("\nITEM doesn't exist\n\n");
	}
}


int main ()
{
	printf("\nEnter size of an array: ");
	scanf("%d", &n); // Reading Size of an Array.
	
	printf("\nEnter elements of an array in sorted form:\n");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]); //Read Array values one by one.
	}
	
	printf("\nEnter ITEM to be searched: ");
	scanf("%d", &item);
	
	binary_search(); /* Calling Function - No Arguments Passing */
	
	return 0;
}


